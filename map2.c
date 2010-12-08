

/*  map2.c  */  

/*                                                     
  A simple program to map an integer (in a given range) 
  to a text string.  
  This code is released to the public domain. 
  "Share and enjoy...."   ;)  
*/                    


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 
#include <math.h> 

     
/*  A function which returns a string according to the range  
    that an integer is in.     
    This function does the following mappings - 
    0..9 inclusive map to "foo" 
    10..19 inclusive map to "bar" 
    20..29 inclusive map to "baz"     
    Any other integer maps to "other".  */  
char *func(int inputval) 
{  
   /*  "Temp" is a helper function, to allow us to work around 
       C's non-support of ranges in the case statement. */ 
                  
   int temp = floor( (double) inputval / 10) ; 
    
   switch(temp) 
     {
     case (0):         
        return "foo" ;
        break; 
     case (1):                 
        return "bar";
        break; 
     case (2):                 
        return "baz";
        break;      
     default: 
        return "other" ; 
     }            
} 


/*  Our map function to apply a function to an array. */ 
void map(int array[], int len, char *(*fn)(int) ) 
{ 
                      
  /* An array to store the results  */  
  char *resarray[len] ; 
      
  int i; 
  
  for(i=0; i<len; i++) 
  { 
     resarray[i] = fn(array[i]);        
     printf("Array[%d] is %d, Result[%d] is %s\n", i, array[i], i, resarray[i]);                   
  } 
  
} 


    
int main(void) 
{ 
  
/*  A function pointer to use  */ 
  char *(*ptr)(int) ;       
    
/*  Point the function pointer at our function */     
  ptr = func;   
  
  int myarray[] = { 3, 5, 11, 17, 24, 28, 37, 45}; 
  
  int len = sizeof(myarray) / sizeof(*myarray);   
  
  map(myarray, len, *ptr); 
  
  return 0; 

} 







