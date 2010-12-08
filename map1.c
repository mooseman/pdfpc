

/*  map1.c  */  

/*                                                     
  A simple program to map an integer (in a given range) 
  to another integer.  
  This code is released to the public domain. 
  "Share and enjoy...."   ;)  
*/                    


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 
#include <math.h> 

     
/*  A simple function to apply to an integer. */   
int func(int inputval)
{  
   /*  "Temp" is a helper function, to allow us to work around 
       C's non-support of ranges in the case statement.    
       NOTE - On Linux, you need to link using the flag -lm as the math 
       functions are apparently in a different library that
       the compiler does not link against unless you tell it to. 
       It is called libm.so   
       So, the build command looks like this - 
       gcc -Wall "%f" -lm   */  
              
       /*  This function does the following mappings - 
        *  0..9 inclusive map to 100 
        *  10..19 inclusive map to 200 
        *  20..29 inclusive map to 300 
        *  30..39 inclusive map to 400 
        *  Any other integer maps to itself.    
       */         
              
   int temp = floor( (double) inputval / 10) ; 
    
   switch(temp) 
     {
     case (0):         
        return 100;
        break; 
     case (1):                 
        return 200;
        break; 
     case (2):                 
        return 300;
        break; 
     case (3):                 
        return 400;
        break; 
     default: 
        return inputval; 
     }            
} 

/*  Our map function to apply a function to an array. */ 
void map(int array[], int len, int (*fn)(int) ) 
{ 
                      
  /* An array to store the results  */  
  int resarray[len] ; 
      
  int i; 
  
  for(i=0; i<len; i++) 
  { 
     resarray[i] = fn(array[i]);        
     printf("Array[%d] is %d, Result[%d] is %d\n", i, array[i], i, resarray[i]);                   
  } 
  
} 


    
int main(void) 
{ 
  
/*  A function pointer to use  */ 
  int (*ptr)(int) ;       
    
/*  Point the function pointer at our function */     
  ptr = func;   
  
  int myarray[] = { 3, 5, 11, 17, 24, 28, 37, 45}; 
  
  int len = sizeof(myarray) / sizeof(*myarray);   
  
  map(myarray, len, *ptr); 
  
  return 0; 

} 







