

/*  fold.c  */  

/*  Apply an operator to all elements of an array, and  */
/*  return the final result. */   
/*  This code is released to the public domain.  */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*  Declare an array and fill it with data. */  
int myarray[8] = {1, 2, 3, 4, 5, 6, 7, 8} ; 

/*  Fold function. */ 
int fold(char op, int init, int *array) 
{     
    int i;
    
    /*  Length of array */ 
    int length=8;     
        
    for( (i=0); (i<length); i++)
    {  
            if (op == '+') { init += array[i]; }                            
       else if (op == '-') { init -= array[i]; }                            
       else if (op == '*') { init *= array[i]; }                           
                     
    } 
    
    return init; 
    
} ; 


int main(void) 
{ 
    
   printf("Result is %d \n", fold('+', 0, myarray) );        
   printf("Result is %d \n", fold('*', 1, myarray) ); 
    
   return 0 ; 
   
} 


    
 






    
















