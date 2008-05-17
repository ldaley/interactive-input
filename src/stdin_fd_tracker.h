#ifndef _STDIN_FD_TRACKER_H_
#define _STDIN_FD_TRACKER_H_

#include <stdbool.h>
#include <sys/select.h>

bool stdin_fd_tracker_is_stdin(int);
void stdin_fd_tracker_did_dup(int,int);
void stdin_fd_tracker_did_close(int);
int stdin_fd_tracker_count_tm_stdin_in_fd_set(fd_set * __restrict);

#endif /* _STDIN_FD_TRACKER_H_ */
