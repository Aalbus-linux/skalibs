/* ISC license. */

#ifndef ALLOC_H
#define ALLOC_H

#include <sys/types.h>
#include <skalibs/gccattributes.h>

typedef char aligned_char gccattr_aligned ;
typedef aligned_char *aligned_char_ref, **aligned_char_ref_ref ;

extern aligned_char *alloc (size_t) ;
extern void alloc_free (void *) ;
#define alloc_re(p, old, new) alloc_realloc(p, new)
extern int alloc_realloc (aligned_char **, size_t) ;

#endif
