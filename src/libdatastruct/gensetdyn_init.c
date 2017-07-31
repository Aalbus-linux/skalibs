/* ISC license. */

#include <stdint.h>
#include <skalibs/genalloc.h>
#include <skalibs/gensetdyn.h>

void gensetdyn_init (gensetdyn *g, uint32_t esize, uint32_t base, uint32_t fracnum, uint32_t fracden)
{
  g->storage.len = 0 ;
  genalloc_setlen(uint32_t, &g->freelist, 0) ;
  g->esize = esize ;
  g->base = base ;
  g->fracnum = fracnum ;
  g->fracden = fracden ;
}
