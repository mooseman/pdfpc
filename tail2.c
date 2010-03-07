

/*  tail.c  */  

/*  Return the tail of an array.  */  
/*  This code is released to the public domain.  */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  Function to return the tail of an array.  */ 
void tail( int *array, int length ) 
{ 
   int *tailarray = *array+1 ;    
   int i; 
   for(i=0; i<length-1; i++)
     {    
       printf("tailarray[%d] is %d \n", i, tailarray[i]);          
     }                 
} ; 


int main(void) 
{ 
   /*  Declare an array and fill it with data. */     
   int myarray[] = {24, 37, 142, 205} ; 
   int length = sizeof(myarray) / sizeof(*myarray);     
    
   printf("Length of myarray is %d \n", length);   
   tail( myarray, length ); 
   /* printf("myarray[%d] \n", myarray[0]);  */    
   return 0 ; 
} 


    
 






    
















