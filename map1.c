

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

/*  Our map function. rstart and rend are the range start and end 
    values  */   
int map1(int test, int rstart, int rend, int mapval)
{  
   if (test >= rstart && test <= rend) 
   {  
      test = mapval;    
   }
   else 
   {
      test = test;         
   }    
      
      return test;         
} 


    
int main(void) 
{ 
  
  char ch; 
  int inval; 
  int retval; 
  int rstart = 10; 
  int rend = 20; 
  int mapval = 100; 
  
  
  do { 
    puts("Enter a number :"); 
    scanf("%d", &inval);  
    
    retval = map1(inval, rstart, rend, mapval);  
    
    printf("Your number maps to %d \n", retval);  
    
    printf("Try again? (y/n) : "); 
    scanf(" %c%*c", &ch);  
  } 
  
    while( toupper(ch) != 'N' );  
       
  return 0; 

} 







