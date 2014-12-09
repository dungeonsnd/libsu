
#include "libsu_commons.h"

void libsu_commons_get_sockfile(char channel[LIBSU_CHANNEL_SIZE],
    char sockfile[LIBSU_SOCKFILE_SIZE])
{
    snprintf(sockfile,sizeof(sockfile),"/tmp/libsu_%s_%s_%d.sock",
        LIBSU_VERSION,channel,int(time(NULL)));
}


