

/*  zip.c  */  
/*  Code for a zip function.  */  
/*  This code is released to the public domain.  */  


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 
#include <ctype.h> 


/*  A simple function tp use with zip  */ 
void func(int arg) 
{ 
   printf("Arg is %d \n", arg); 
}    


/*  Zip function for two numeric arrays.  */ 
void zip(int *array1, int *array2) 
{ 
    int i ; 
            
    /* Test the array lengths, If they are not equal, only zip up to 
     * the length of the shortest one. */     
    int len1 = sizeof(array1) ;   
    int len2 = sizeof(array2) ;   
     
    /*  Use the shortest array length */  
    int min = len1 < len2 ? len1 : len2 ; 
    
    printf("Len1: %d  Len2: %d  min: %d \n", len1, len2, min ); 
            
    int resarray[min][2];     
    
    int pair[2] ;     
            
         for(i=0; i<min; i++) 
         { 
          
          /* Our pair array */             
          pair[0] = array1[i] ; 
          pair[1] = array2[i] ; 
          
          resarray[i][0] = pair[0] ; 
          resarray[i][1] = pair[1] ; 
          
          printf("Result[%d] is (%d,%d) \n", i, resarray[i][0], resarray[i][1]); 
          
         }                        
         
}; 


int main(void) 
{ 
   /*  Declare an array and fill it with data. */     
   int myarray1[] = {24, 37, 142, 205}; 
   int myarray2[] = {2, 4, 6, 8};
          
   zip( myarray1, myarray2); 
      
   return 0 ; 
   
} 


