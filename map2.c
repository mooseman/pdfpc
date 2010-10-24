

/*  map2.c  */  

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

     
/*  Our map function. rstart and rend are the range start and end 
    values  */   
int map1(int inputval)
{  
   /*  A helper function. This allows us to work around C's non-support 
       of ranges in the case statement.    
       NOTE - On Linux, you need to link using the flag -lm as the math 
       functions are apparently in a different library that
       the compiler does not link against unless you tell it to. 
       It is called libm.so   
       So, ny build command looks like this - 
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


/*  A mapping function which returns a string  */ 
/*  This function does the following mappings - 
    0..9 inclusive map to "foo" 
    10..19 inclusive map to "bar" 
    20..29 inclusive map to "baz"     
    Any other integer maps to "other".  */  
char *map2(int inputval) 
{
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


    
int main(void) 
{ 
  
  char ch; 
  int inval; 
  int retval1; 
  char *retval2; 
      
      
  do { 
    puts("Enter a number :"); 
    scanf("%d", &inval);  
    
    retval1 = map1(inval);  
    retval2 = map2(inval);  
    
    printf("Map1 maps your number to %d \n", retval1); 
    printf("Map2 maps your number to %s \n", retval2);  
    
    printf("Try again? (y/n) : "); 
    scanf(" %c%*c", &ch);  
  } 
  
    while( toupper(ch) != 'N' );  
       
  return 0; 

} 







