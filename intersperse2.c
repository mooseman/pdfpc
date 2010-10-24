

/*  intersperse.c  */  

/*  Alternate a character through an array.  */  
/*  This code is released to the public domain.  */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <termios.h>
#include <unistd.h>


/*  Declare an array and fill it with data. */  
char myarray[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'} ; 

/*  Intersperse function. */ 
void intersperse1(char ch, char *array ) 
{     
    int i;
    /*  Length of array */ 
    int length=8; 
    
    /*  Calculate length of first result array */  
    /*  This one puts no characters at the ends */ 
    /*  of the new array. */  
    int len = (length * 2) - 1 ; 
    
    /* The "result" array with the characters */ 
    /* interspersed through it.  */ 
    char res[len];     
                    
    for( (i=0); (i<len); i++)
    {  
       if (i == 0) res[i] = array[i];  
       else if (i%2 == 0) res[i] = array[i/2]; 
       else if (i%2 == 1) res[i] = ch;        
       printf("Array[i] is %c \n", res[i]); 
    } 
                                           
} ; 


/*  Intersperse function. */ 
void intersperse2(char ch, char *array ) 
{     
    int j;    
    /*  Length of array */ 
    int length=8; 
    
    /*  Calculate length of array */      
    /*  An array which does include chars at the ends */ 
    int len = (length * 2) + 1  ;  
    
    /* The "result" array */      
    char res[len];  
                             
    for( (j=0); (j<len); j++)
    {  
       if (j == 0) res[j] = ch; 
       else if (j%2 == 1) res[j] = array[j/2]; 
       else res[j] = ch; 
       printf("Array[j] is %c \n", res[j]); 
    } 
                                           
} ; 



int main(void) 
{ 
    
   intersperse1('*', myarray);     
   puts("Now the next array... \n");  
   
   intersperse2('*', myarray);     
   
   return 0 ; 
   
} 


    
 






    
















