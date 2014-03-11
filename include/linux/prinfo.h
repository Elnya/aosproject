/**
 * prinfo.h - header file for syscall ptree
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#ifndef _LINUX_PRINFO_H
#define _LINUX_PRINFO_H

#include <linux/types.h>

struct prinfo {
	long state;		/* current state of process */
	pid_t pid;		/* process id */
	pid_t parent_pid;	/* process id of parrent */
	pid_t first_child_pid;	/* pid of youngest child */
	pid_t next_sibling_pid;	/* pid of older sibling */
	long uid;		/* pid of older sibling */
	char comm[64];		/* pid of older sibling */
};

#endif
