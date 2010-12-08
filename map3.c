

/*  map3.c  */  

/*                                                     
  A simple program to apply a function to each element 
  of an array, and store the result in another array.   
  This code is released to the public domain. 
  "Share and enjoy...."   ;)  
*/                    


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 
#include <math.h> 

     
     
/*  A function to apply to an integer.  */  
int func(int val) 
{ 
  return pow(val,2) + 5;   
}             
     

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
  
  int myarray[] = {2, 3, 5, 7, 11, 13, 17}; 
  
  int len = sizeof(myarray) / sizeof(*myarray);   
  
  map(myarray, len, *ptr); 
         
  return 0; 

} 







