#ifndef NET_GO_H
#define NET_GO_H

#include <netdb.h>

#define gethostbyname go_net_gethostbyname

#undef ioctlsocket
#undef closesocket

#define recvfrom go_net_recvfrom
#define sendto go_net_sendto
#define sendto_batch go_net_sendto_batch
#define socket go_net_socket
#define ioctlsocket(...) 0
#define setsockopt(...) 0
#define gethostname go_net_gethostname
#define getsockname go_net_getsockname
#define connect go_net_connect
#define send go_net_send
#define recv go_net_recv
#define bind go_net_bind
#define closesocket go_net_closesocket
#define select go_net_select
#define getaddrinfo go_net_getaddrinfo

extern int go_net_recvfrom( int, void *__restrict, size_t, int, struct sockaddr *__restrict, int *__restrict );
extern int go_net_sendto ( int, const void *, size_t, int, const struct sockaddr *, int );
extern int go_net_sendto_batch ( int, char *packets[], int sizes[], int, int, const struct sockaddr_storage *to,	int );
extern int go_net_socket( int, int, int );
extern struct hostent *go_net_gethostbyname( const char * );
extern int go_net_gethostname( char *, size_t );
extern int go_net_getsockname( int, struct sockaddr *__restrict, int *__restrict );
extern int go_net_send( int, const void *, size_t, int );
extern int go_net_recv( int, void *, size_t, int );
extern int go_net_connect( int, const struct sockaddr *, int );
extern int go_net_bind( int, const struct sockaddr *, int );
extern int go_net_closesocket( int );
extern int go_net_select( int, fd_set *__restrict, fd_set *__restrict, fd_set *__restrict, struct timeval *__restrict );
extern int go_net_getaddrinfo (const char *__restrict, const char *__restrict, const struct addrinfo *__restrict, struct addrinfo **__restrict);

#endif // NET_GO_H
