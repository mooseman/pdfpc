

/* findindices.c */

/*  Find the indices of all elements in an array  */
/*  which satisfy a given condition.              */ 
/*  This code is released to the public domain.   */
/*  "Share and enjoy...."   ;)                    */ 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


/* The findindices function.  */  
/* This takes a pointer to an array, a function pointer to a */ 
/* comparison function, and a value to use as a comparison.  */   
void findindices(const int *myarray, int (*comp)(const int, const int), const int val)
{ 
  /* First, find how many elements meet the condition. */ 
  /* This allows us to set the array size.  */    
  int count=0; 
              
  for (int i=0; i<5; i++) {
    if (comp(myarray[i], val)) count += 1;            
  }  
  
  /* We now know the length that the return array should be. */ 
  int retarray[count]; 
  int index=0;
  
  /* Filter the original array. */  
  for (int j=0; j<5; j++) {
    if (comp(myarray[j], val)) {retarray[index] = j;       
       index += 1;  }            
  }  
   
   /* Print the return array  */  
   for (int k=0; k<count; k++) printf("%d \n", retarray[k] );
              
}


/* Our comparison function.  */ 
/* This could be modified to do a more complex comparison. */ 
int cmp_gt(const int a, const int val)
{
  return a > val;
}



int main(int argc, char *argv[])
{
    
  int a[] = {1, 4, 17, 23, 8};
  
  findindices(a, cmp_gt, 10) ; 
  
  return 0; 
    
}


