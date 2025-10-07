#ifndef NET_LIB_H
#define NET_LIB_H

#include <netdb.h>

#define gethostbyname lib_net_gethostbyname

#undef ioctlsocket
#undef closesocket

#define recvfrom lib_net_recvfrom
#define sendto lib_net_sendto
#define sendto_batch lib_net_sendto_batch
#define socket lib_net_socket
#define ioctlsocket(...) 0
#define setsockopt(...) 0
#define gethostname lib_net_gethostname
#define getsockname lib_net_getsockname
#define connect lib_net_connect
#define send lib_net_send
#define recv lib_net_recv
#define bind lib_net_bind
#define closesocket lib_net_closesocket
#define select lib_net_select
#define getaddrinfo lib_net_getaddrinfo

extern int lib_net_recvfrom( int, void *__restrict, size_t, int, struct sockaddr *__restrict, int *__restrict );
extern int lib_net_sendto ( int, const void *, size_t, int, const struct sockaddr *, int );
extern int lib_net_sendto_batch ( int, char *packets[], int sizes[], int, int, const struct sockaddr_storage *to,	int );
extern int lib_net_socket( int, int, int );
extern struct hostent *lib_net_gethostbyname( const char * );
extern int lib_net_gethostname( char *, size_t );
extern int lib_net_getsockname( int, struct sockaddr *__restrict, int *__restrict );
extern int lib_net_send( int, const void *, size_t, int );
extern int lib_net_recv( int, void *, size_t, int );
extern int lib_net_connect( int, const struct sockaddr *, int );
extern int lib_net_bind( int, const struct sockaddr *, int );
extern int lib_net_closesocket( int );
extern int lib_net_select( int, fd_set *__restrict, fd_set *__restrict, fd_set *__restrict, struct timeval *__restrict );
extern int lib_net_getaddrinfo (const char *__restrict, const char *__restrict, const struct addrinfo *__restrict, struct addrinfo **__restrict);

#endif // NET_LIB_H
