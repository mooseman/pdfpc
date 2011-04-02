
/* elem.c */

/* Returns TRUE if the first argument is a       */
/* member of the array (the second argument).    */
/* Otherwise, returns FALSE.                     */  
/*  This code is released to the public domain.  */
/*  "Share and enjoy...."   ;)                   */ 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/* Define the length of the array */ 
#define LEN 5  


/* Function to find if a value is a member  */ 
/* of an array.                             */    
/* Returns 1 if it is, and 0 if it is not.  */  
int elem(int val, int myarray[LEN])
{          
    int i; 
    int retval=0;  
                            
    for(i=0; i<LEN; i++)
    {  
       if (myarray[i] == val) {
          retval += 1; break; }        
    }      
        
    return retval;                                                                               
}


/*  The function to show if an element is NOT in the array.  */  
/*  Returns 1 if it is NOT, and 0 if it IS.  */  
int notelem(int val, int myarray[LEN])
{  
   return !elem(val, myarray);   
}       



int main(void)
{
   /* Declare arrays and fill them with data. */
   int myarray[LEN] = {2, 3, 5, 7, 11} ;

   int myarray2[LEN] = {4, 6, 8, 10, 12}; 
   

   /* Test to see if an element is in the array.  */              
   printf("Result is %d \n",  elem(5, myarray) );
   
   /* Test to see if an element is in the array.  */              
   printf("Result is %d \n",  elem(5, myarray2) );
   
   /* Test to see if an element is NOT in the array.  */              
   printf("Result is %d \n",  notelem(5, myarray) );
   
   /* Test to see if an element is NOT in the array.  */              
   printf("Result is %d \n",  notelem(5, myarray2) );
   
   
   return 0 ;
}


    
