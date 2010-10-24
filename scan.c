

/*  scan.c  */  

/*  Apply an operator to all elements of an array, and  */
/*  return the list of successive results. */   
/*  This code is released to the public domain.  */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*  Declare an array and fill it with data. */  
int myarray[8] = {1, 2, 3, 4, 5, 6, 7, 8} ; 

/*  Scan function. */ 
void scan(char op, int initval, int *array) 
{     
    int i;    
    /*  Length of array */ 
    int length=8;     
        
    for( (i=0); (i<length); i++)
    {  
            if (op == '+') { initval += array[i]; }                            
       else if (op == '-') { initval -= array[i]; }                            
       else if (op == '*') { initval *= array[i]; }                           
       
       printf("Result is %d \n", initval);               
    } 
    
} ; 


int main(void) 
{ 
    
   scan('+', 0, myarray);        
   scan('*', 1, myarray); 
    
   return 0 ; 
   
} 


    
 






    
















