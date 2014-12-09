#ifndef _HEADER_FILE_LIBSU_NEW_PROGRAM_H_
#define _HEADER_FILE_LIBSU_NEW_PROGRAM_H_

#include "libsu_commons.h"

int libsu_new_recv_listenfds();
int libsu_new_start_monitor_listenfds();

int libsu_new_recv_sessions();
int libsu_new_process_sessions();
int libsu_new_start_monitor_sessions();


#endif // _HEADER_FILE_LIBSU_NEW_PROGRAM_H_
