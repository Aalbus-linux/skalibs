/* ISC license. */

#include <sys/types.h>
#include <skalibs/bitarray.h>

size_t bitarray_firstclear_skip (unsigned char const *s, size_t max, size_t skip)
{
  size_t i = bitarray_div8(skip) ;
  size_t j = i << 3 > max ? max : i << 3 ;
  if (i && s[i-1] != 0xffU)
  {
    while ((skip < j) && bitarray_peek(s, skip)) skip++ ;
    if (skip < j) return skip ;
  }
  return j + bitarray_firstclear(s + i, max - j) ;
}
