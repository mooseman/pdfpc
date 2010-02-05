

/*  tail.c  */  

/*  Return the tail of an array.  */  
/*  This code is released to the public domain.  */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  Function to return the tail of an array.  */ 
void tail( int *array, int length ) 
{ 
    int i ; 
    /* Create an array to stroe the "tail" elements. */     
    int tailarray[length-1] ; 
    
    for(i=1; i<length; i++)
    {  
       tailarray[i-1] = array[i] ;       
       printf("tailarray[%d] is %d \n", i-1, tailarray[i-1]);          
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


    
 






    
















