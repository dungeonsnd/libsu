#ifndef _HEADER_FILE_LIBSU_COMMONS_H_
#define _HEADER_FILE_LIBSU_COMMONS_H_

#include <event2/bufferevent.h>
#include <event2/buffer.h>
#include <event2/listener.h>
#include <event2/util.h>
#include <event2/event.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
       
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>


#define LIBSU_VERSION "0.1"

#define LIBSU_ERRMSG_SIZE 2048
#define LIBSU_CHANNEL_SIZE 1024
#define LIBSU_SOCKFILE_SIZE LIBSU_CHANNEL_SIZE+64

void libsu_commons_get_sockfile(const char channel[LIBSU_CHANNEL_SIZE],
    char sockfile[LIBSU_SOCKFILE_SIZE]);

#endif // _HEADER_FILE_LIBSU_COMMONS_H_

