/* ISC license. */

#include <sys/types.h>
#include <sys/socket.h>
#include <errno.h>
#include <skalibs/allreadwrite.h>

ssize_t fd_send (int fd, char const *buf, size_t len, unsigned int flags)
{
  ssize_t r ;
  do r = send(fd, buf, len, flags) ;
  while ((r == -1) && (errno == EINTR)) ;
  return r ;
}
