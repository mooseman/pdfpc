

/*  lsucc.c  */  

/*  Return the list element after the specified one.    */  
/*  Note that the array count starts from 0, so if you   */ 
/*  specify element 2, this will get the succ of the     */ 
/*  3rd array element.                                   */
/*  Note that this is different to Haskell's "succ".     */ 
/*  This code is released to the public domain.          */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  Function to return pred element. */ 
void succ( int *array, int elem ) 
{  
   printf("Element %d is %d \n", elem, array[elem]);  
   printf("Succ element is %d \n", array[elem+1]);                                       
} ; 


int main(void) 
{ 
   /*  Declare an array and fill it with data. */     
   int myarray[] = {24, 37, 142, 205} ;    
    
   succ( myarray, 1);    
   return 0 ; 
   
} 



