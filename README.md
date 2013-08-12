bwm-ng
======

By Volker Gropp: Bandwidth Monitor NG is a small and simple console-based live network and disk io bandwidth monitor for Linux, BSD, Solaris, Mac OS X and others.

Homepage: http://www.gropp.org/?id=projects&sub=bwm-ng

bwm-ng with Linux Network Namespaces Support
============================================
Added by Jeremias Blendin, Peer-to-Peer Systems Engineering Lab, TU Darmstadt, Germany

An version of bwm-ng v0.6 that allows to monitor interfaces of different Linux network namespaces in parallel. A list of PIDs is supplied, whose network namespaces are included in the network bandwidth monitoring process. The namespaces of the given PIDs are extracted and the list of unique network namespaces is used for bandwidth monitoring. The list of PIDs is supplied by using the new "-p" command line parameter.  

The author is no C programming expert, this version is considered alpha quality. Improvements and suggestions are welcome.


Restrictions:
- Only works on Linux, tested on Ubuntu 12.10 and 13.04
- Only works with the PROC_NET_DEV/proc input
- Only network interfaces with unique names can be monitored. Users are should
exclude interfaces with duplicated names -- such as the loopback interfaces -- by adding an appropriate
interface selector parameter (eg. "-I %lo")
- Tested with csv output only, the curses interface does not display the interfaces
correctly
- Must be run with sudo/as root
- Alpha quality software, be careful


Usage example:
sudo bwm-ng -p 1294,1200,4345 -o csv -I %lo

