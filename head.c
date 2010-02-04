

/*  head.c  */  

/*  Return the head of an array.  */  
/*  This code is released to the public domain.  */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>


/*  Declare an array and fill it with data. */  
int myarray[] = {24, 37, 142, 205} ; 

/*  Function to return the head of an array.  */ 
int head( int *array ) 
{ 
    return array[0] ;      
} ; 


int main(void) 
{ 
    
   printf("First element of myarray is %d \n", head( myarray )); 
   printf("myarray[%d] \n", myarray[0]);    
   return 0 ; 
} 


    
 






    
















