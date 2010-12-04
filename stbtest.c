

/*  stbtest.c  */  
/*  Try some of the stb stuff.  */  
/*  This code is released to the public domain.  */  


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 
#include <ctype.h> 
#include "stb.h"  

  int *arr = NULL;
  
  stb_arr_push(arr,1);
  stb_arr_push(arr,2);
  stb_arr_push(arr,3);
  stb_arr_push(arr,4);
  stb_arr_push(arr,5);
  stb_arr_push(arr,6);


int main(void) 
{ 

  printf("%d", stb_arr_len(arr)); 
      
   return 0 ; 
   
} 


