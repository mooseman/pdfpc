

/*  slice.c  */  

/*  Extract a slice from an array.  */  
/*  This code is released to the public domain.  */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  Function to return a slice from an array.  */ 
void slice( int array[], int first, int last) 
{ 
    int retarray[last-first]; 
    
    int i ; 
        
    printf("Getting slice[%d:%d] of array \n", first, last); 
    printf("(Elements %d to %d of array.) \n", first, last);            
                
    for(i=first; i<last+1; i++)
    {     
       retarray[i-first] = array[i] ;     
       printf("Element[%d] is %d \n", i-first, retarray[i-first] );                  
    }     
                                                                 
}  



int main(void) 
{ 
   /*  Declare an array and fill it with data. */     
   int myarray[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29} ;    
            
   slice(myarray, 3, 6); 
   
   return 0 ; 
} 


    
 




