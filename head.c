

/*  head.c  */  

/*  Return the head of an array.  */  
/*  This code is released to the public domain.  */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <termios.h>
#include <unistd.h>


/*  Declare an array and fill it with data. */  
int myarray[] = {2, 7, 15, 24, 37, 42, 75, 105} ; 

/*  Function to return the head of an array.  */ 
/*  Return the first n elements of the array. */  
void head(int n, int *array ) 
{     
    int i; 
   
    printf("Getting head[%d] of array \n", n); 
    printf("(First %d elements of array.) \n", n); 
    
    for( (i=0); (i<n); i++)
    {                
       printf("Element[%d] of array is %d \n", i, myarray[i]);               
    } 
    
} ; 


int main(void) 
{ 
    
   head(3, myarray);      
   return 0 ; 
   
} 


    
 






    
















