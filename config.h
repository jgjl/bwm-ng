/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* allow set path to netstat at runtime */
/* #undef ALLOW_NETSTATPATH */

/* enable use of configfile */
#define CONFIG_FILE 1

/* enable CSV output */
#define CSV 1

/* enable max, sum and avg stats */
#define EXTENDED_STATS 1

/* cc knows about noreturn */
#define FUNCATTR_NORETURN __attribute__ ((noreturn))

/* Define to 1 if you have the `curs_set' function. */
#define HAVE_CURS_SET 1

/* Define to 1 if you have the 'devstat' library (-ldevstat). */
/* #undef HAVE_DEVSTAT_GETDEVS */

/* Define to 1 if you have the <devstat.h> header file. */
/* #undef HAVE_DEVSTAT_H */

/* Define to 1 if you have the 'devstat' library (-ldevstat). */
/* #undef HAVE_GETDEVS */

/* Define to 1 if you have the `getifaddrs' function. */
#define HAVE_GETIFADDRS 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* enable use of getbwuid */
#define HAVE_GETPWUID 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `ioctl' function. */
#define HAVE_IOCTL 1

/* Define to 1 if you have the `IOMasterPort' function. */
/* #undef HAVE_IOMASTERPORT */

/* Define to 1 if you have the `IORegistryEntryCreateCFProperties' function.
   */
/* #undef HAVE_IOREGISTRYENTRYCREATECFPROPERTIES */

/* Define to 1 if you have Darwin IOService support */
/* #undef HAVE_IOSERVICE */

/* Define to 1 if you have the `IOServiceGetMatchingServices' function. */
/* #undef HAVE_IOSERVICEGETMATCHINGSERVICES */

/* Define to 1 if you have the `curses' library (-lcurses). */
#define HAVE_LIBCURSES 1

/* Define to 1 if you have the 'kstat' library (-lkstat). */
/* #undef HAVE_LIBKSTAT */

/* Define to 1 if you have the `ncurses' library (-lncurses). */
/* #undef HAVE_LIBNCURSES */

/* Define to 1 if you have the 'statgrab' library (-lstatgrab). */
/* #undef HAVE_LIBSTATGRAB */

/* Define to 1 if you have the <linux/if.h> header file. */
#define HAVE_LINUX_IF_H 1

/* Define to 1 if you have the <linux/tty.h> header file. */
#define HAVE_LINUX_TTY_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* set path to netstat */
/* #undef HAVE_NETSTAT_PATH */

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the <stropts.h> header file. */
#define HAVE_STROPTS_H 1

/* sysctl diskinput available */
/* #undef HAVE_STRUCT_DISKSTATS */

/* Define to 1 if `ds_name' is a member of `struct diskstats'. */
/* #undef HAVE_STRUCT_DISKSTATS_DS_NAME */

/* Define to 1 if `ds_rbytes' is a member of `struct diskstats'. */
/* #undef HAVE_STRUCT_DISKSTATS_DS_RBYTES */

/* sysctl diskinput available */
/* #undef HAVE_STRUCT_DISK_SYSCTL */

/* Define to 1 if `dk_rbytes' is a member of `struct disk_sysctl'. */
/* #undef HAVE_STRUCT_DISK_SYSCTL_DK_RBYTES */

/* Define to 1 if `ifi_ibytes' is a member of `struct if_data'. */
/* #undef HAVE_STRUCT_IF_DATA_IFI_IBYTES */

/* sysctl input fully available */
/* #undef HAVE_STRUCT_IF_MSGHDR_IFM_DATA */

/* Define to 1 if you have the `sysctl' function. */
#define HAVE_SYSCTL 1

/* Define to 1 if you have the <sys/disk.h> header file. */
/* #undef HAVE_SYS_DISK_H */

/* Define to 1 if you have the <sys/dkstat.h> header file. */
/* #undef HAVE_SYS_DKSTAT_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/tty.h> header file. */
/* #undef HAVE_SYS_TTY_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type `unsigned long long'. */
#define HAVE_UNSIGNED_LONG_LONG 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the `wattron' function. */
#define HAVE_WATTRON 1

/* getifaddrs works as espected */
/* #undef HAVE_WORKING_GETIFADDRS */

/* enable /proc/diskstats|/proc/partitions support */
#define HAVE__PROC_DISKSTATS 1

/* Define to 1 if you have the file `/proc/net/dev'. */
#define HAVE__PROC_NET_DEV 1

/* Define to 1 if you have the file `/proc/partitions'. */
/* #undef HAVE__PROC_PARTITIONS */

/* Define to 1 if you have the file `/usr/ccs/bin/strip'. */
/* #undef HAVE__USR_CCS_BIN_STRIP */

/* enable html output */
#define HTML 1

/* BSD like netstat */
/* #undef NETSTAT_BSD */

/* bsd like version with byte info */
/* #undef NETSTAT_BSD_BYTES */

/* enable link info for netstat */
/* #undef NETSTAT_BSD_LINK */

/* use GNU net-tools netstat */
#define NETSTAT_LINUX 1

/* Use Net/OpenBSD netstat */
/* #undef NETSTAT_NETBSD */

/* use Solaris netstat */
/* #undef NETSTAT_SOLARIS */

/* Name of package */
#define PACKAGE "bwm-ng"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bwmng@gropp.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "bwm-ng"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "bwm-ng 0.6"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "bwm-ng"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.6"

/* set path to /proc/disktstats raw-file */
/* #undef PROC_DISKSTATS_PATH */

/* set path to /proc/net/dev raw-file */
/* #undef PROC_NET_DEV_PATH */

/* set path to /proc/partitions raw-file */
/* #undef PROC_PARTITIONS_PATH */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* enable 64bit support */
/* #undef SYS_64BIT */

/* Version number of package */
#define VERSION "0.6"

/* enable win32 support */
/* #undef WIN32 */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif
