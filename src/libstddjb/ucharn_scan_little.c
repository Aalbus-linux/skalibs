/* ISC license. */

#include <sys/types.h>
#include <skalibs/fmtscan.h>

size_t ucharn_scan_little (char const *s, char *key, size_t n)
{
  size_t i = 0 ;
  for (; i < n ; i++)
  {
    unsigned char c = fmtscan_num(s[(i<<1)+1], 16) ;
    if (c > 0xF) return 0 ;
    key[i] = c << 4 ;
    c = fmtscan_num(s[i<<1], 16) ;
    if (c > 0xF) return 0 ;
    key[i] += c ;
  }
  return n << 1 ;
}
