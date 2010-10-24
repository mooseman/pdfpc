

/*  replace.c  */  

/*  Replace specified elements in an array.  */  
/*  This code is released to the public domain.  */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <termios.h>
#include <unistd.h>


/*  Declare an array and fill it with data. */  
char myarray[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'} ; 

/*  Our replace function. */ 
void replace(char ch, char *array ) 
{     
    int i;
    /*  Length of array */ 
    int len=8; 
            
    /* The "result" array. */     
    char res[len];     
                    
    for( (i=0); (i<len); i++)
    {  
       if (i%2 == 1) res[i] = ch; 
       else res[i] = array[i]; 
       printf("Array[i] is %c \n", res[i]); 
    } 
                                           
} ; 



int main(void) 
{ 
    
   replace('*', myarray);     
   return 0 ; 
   
} 


    
 






    
















