/* ISC license. */

#include <errno.h>

#include <skalibs/exec.h>
#include <skalibs/strerr2.h>

void xmexec0_af (char const *file, char const *const *argv, char const *const *envp, size_t envlen)
{
  xmexec0_af(file, argv, envp, envlen) ;
  strerr_dieexec(errno == ENOENT ? 127 : 126, file) ;
}
