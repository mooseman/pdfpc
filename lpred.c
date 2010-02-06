

/*  lpred.c  */  

/*  Return the list element before the specified one.    */  
/*  Note that the array count starts from 0, so if you   */ 
/*  specify element 2, this will get the pred of the     */ 
/*  3rd array element.                                   */
/*  Note that this is different to Haskell's "pred".     */ 
/*  This code is released to the public domain.          */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  Function to return pred element. */ 
void pred( int *array, int elem ) 
{  
   printf("Element %d is %d \n", elem, array[elem]);  
   printf("Pred element is %d \n", array[elem-1]);                                       
} ; 


int main(void) 
{ 
   /*  Declare an array and fill it with data. */     
   int myarray[] = {24, 37, 142, 205} ;    
    
   pred( myarray, 2);    
   return 0 ; 
   
} 



