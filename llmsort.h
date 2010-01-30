#ifndef __LLMSORT_H
#define __LLMSORT_H 1

/* This code is in the public domain. 
   It is from here - 
   http://www.efgh.com/software/llmsort.htm 
*/     

extern "C" {
 void *sort_linked_list(void *p, unsigned index,
   int (*compare)(void *, void *, void *), void *pointer,
   unsigned long *pcount);
}

template <class T> inline T *sort_list(T *base, unsigned index,
  int (*compare)(const T *, const T *, void *), void *pointer,
  unsigned long *pcount)
{
  return (T *) sort_linked_list(base, index,
    (int (*)(void *, void *, void *)) compare, pointer, pcount);
}

#endif

