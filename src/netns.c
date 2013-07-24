/******************************************************************************
 *  File: netns.c                                                             *
 *                                                                            *
 *  Copyright (C) 2013 Jeremias Blendin 	                              *
 *                                                                            *
 *  for more info read README.                                                *
 *                                                                            *
 *  This program is free software; you can redistribute it and/or modify      *
 *  it under the terms of the GNU General Public License as published by      *
 *  the Free Software Foundation; either version 2 of the License, or         *
 *  (at your option) any later version.                                       *
 *                                                                            *
 *  This program is distributed in the hope that it will be useful,           *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
 *  GNU General Public License for more details.                              *
 *                                                                            *
 *  You should have received a copy of the GNU General Public License         *
 *  along with this program; if not, write to the Free Software               *
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA *
 *                                                                            *
 *****************************************************************************/

#include <stdlib.h>
#include <sched.h>

#include "netns.h"
#include "global_vars.h"

void print_array(int *array, int len)
{
	int i;
    if (sizeof(array) == 0) return;
	printf("Array[%d]", len);
	for (i=0; i<len; i++) {
		printf("  %u", array[i]);
    }	
    printf("\n");
}


bool array_contains(int pid, int *pid_list, int len)
{
	int i;
	for (i=0; i<len; i++) {
		if (pid == pid_list[i]) {
	    	return true;
		}
    }	

    return false;
}

void *process_netns_pid_list(char *pid_str)
{
    char path[255];
    int pid_cnt;
    int ns_cnt;
    unsigned int *ns_list; // list of namespace ids
    int *fd_list; // file descriptor list of namespaces

    /* Get the number of PIDs given */
    char *s = pid_str;		
    /* Line take from here: http://stackoverflow.com/a/4235884*/
    for (pid_cnt=0; s[pid_cnt]; s[pid_cnt]==',' ? pid_cnt++ : s++);
    pid_cnt ++;

    ns_list = malloc(pid_cnt*sizeof(int));
    memset( ns_list, 0, pid_cnt*sizeof(int) );
    fd_list = malloc(pid_cnt*sizeof(int));
    memset( fd_list, 0, pid_cnt*sizeof(int) );

    /* Get the PIDs, check for uniqueness */
    char *str=strtok(pid_str,",");
    char *ns_name;
    int nsfd;
    int nsid;
    int pid;
    int cnt = 0;
    char buf[1024];
    int buf_len;
    ns_cnt = 0;
	while (str != NULL) {
		cnt ++;
		/* Taken from mnexec.c of mininet 2.0 */
		pid = atoi(str);
		sprintf(path, "/proc/%d/ns/net", pid);
	    nsfd = open(path, O_RDONLY);
	    if (nsfd < 0) {
			perror(path);
			return 1;
	    } else {
		    if (!readlink(path, buf, sizeof(buf)) < 0) {
				perror(path);
				return 1;
		    }
			buf_len = strlen(buf);	
			ns_name = malloc(sizeof(char)*(buf_len-5-1));
			strncpy(ns_name, buf+5, buf_len-5-1);
			nsid = atoi(ns_name);
			free(ns_name);
			if (!array_contains(nsid, ns_list, pid_cnt)) {
				ns_list[ns_cnt] = nsid;
				fd_list[ns_cnt] = nsfd;
				ns_cnt ++;
		    }
		}
		/*
	    if (setns(nsid, 0) != 0) {
                perror("setns");
                return 1;
	    }
		*/
		//print_array(ns_list, pid_cnt);
		str = strtok(NULL,","); 
	}
	//printf("\n");
    //printf("Anzahl: %d\n", ns_cnt);
	//print_array(ns_list, pid_cnt);

	nsfd_list = malloc(ns_cnt*sizeof(int));
    int i;
	for (i=0; i<ns_cnt;i++) {
		nsfd_list[i] = fd_list[i];
    }
    nsfd_cnt = ns_cnt;

    free(ns_list);
    free(fd_list);
	//print_array(nsfd_list, nsfd_cnt);
}
