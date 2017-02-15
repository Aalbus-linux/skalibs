/* ISC license. */

#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <skalibs/djbunix.h>

int fd_chown (int fd, uid_t uid, gid_t gid)
{
  register int r ;
  do
    r = fchown(fd, uid, gid) ;
  while ((r == -1) && (errno == EINTR)) ;
  return r ;
}
