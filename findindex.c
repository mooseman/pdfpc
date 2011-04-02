

/* findindex.c */

/*  Find the index of the first element in an array  */
/*  which satisfies a given condition.               */
/*  Many thanks to MadCow108 in the Ubuntu forum     */
/*  for helping with this.                           */ 
/*  This code is released to the public domain.      */
/*  "Share and enjoy...."   ;)                       */ 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


/* A helper function.  */  
/* This takes a pointer to an array, a function pointer to a */ 
/* comparison function, and a value to use as a comparison.  */   
int findindex(const int *myarray, int (*comp)(const int, const int), const int val)
{
  for (int i = 0; i < 5; i++) {
    if (comp(myarray[i], val))
      return i;
  }
  return -1;
}


/* Our comparison function.  */ 
/* This could be modified to do a more complex comparison. */ 
int cmp_gt(const int a, const int val)
{
  return a > val;
}



int main(int argc, const char *argv[])
{
    
  int a[] = {1, 4, 17, 23, 8};
  
  printf("Result is %d \n", findindex(a, cmp_gt, 10) ); 
  
  return 0;  
    
}


