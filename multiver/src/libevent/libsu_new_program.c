
#include "libsu_new_program.h"


int libsu_new_recv_listenfds(struct event_base *base, 
    const char channel[LIBSU_CHANNEL_SIZE],
    evconnlistener_cb libsu_new_accept_conn_cb,
    evconnlistener_errorcb libsu_new_accept_error_cb,
    char errmsg[LIBSU_ERRMSG_SIZE])
{
	int res =0;
    do{
        struct evconnlistener * listener =NULL;
        struct sockaddr_un servaddr;
        char sockfile[LIBSU_SOCKFILE_SIZE];
        libsu_commons_get_sockfile(channel, sockfile);
        
        unlink(sockfile);
        bzero(&servaddr, sizeof(servaddr));
        servaddr.sun_family = AF_LOCAL;
        strcpy(servaddr.sun_path, sockfile);
        
        listener = evconnlistener_new_bind(base, libsu_new_accept_conn_cb, NULL,
            LEV_OPT_CLOSE_ON_FREE, -1,(struct sockaddr*)&servaddr, sizeof(servaddr));
        if (!listener) {
            snprintf(errmsg,sizeof(errmsg),"Couldn't create listener");
            res =-1;
            break;
        }
        evconnlistener_set_error_cb(listener, libsu_new_accept_error_cb);
    }while(0);
	return res;
}

int libsu_new_start_monitor_listenfds()
{
	int res =0;
    do{
    }while(0);
	return res;
}


int libsu_new_recv_sessions()
{
	int res =0;
    do{
    }while(0);
	return res;
}
int libsu_new_process_sessions()
{
	int res =0;
    do{
    }while(0);
	return res;
}
int libsu_new_start_monitor_sessions()
{
	int res =0;
    do{
    }while(0);
	return res;
}

