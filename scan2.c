

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
int scan(char op, int initval, int *array) 
{     
    int i;    
    /*  Length of array */ 
    int length=8;     
               
    /*  Array to store the results. */ 
    static int res[8];  
        
    for( (i=0); (i<length); i++)
    {  
            if (op == '+') { 
                initval += array[i];                
                res[i]  += initval;  }                            
       else if (op == '-') { res[i] = initval -= array[i]; }                            
       else if (op == '*') { res[i] = initval *= array[i]; }                                           
    } 
    
    return (int)res;   
    
} ; 


int main(void) 
{ 
    
   printf("Result is %d \n", scan('+', 0, myarray) );         
 /*  printf("Result is %d \n", scan('*', 1, myarray) );  */  
       
   return 0 ; 
   
} 


    
 






    
















