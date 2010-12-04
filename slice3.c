

/*  slice.c  */  

/*  Extract a slice from an array.  */  
/*  This code is released to the public domain.  */  


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>  


/*  Function to return a slice from an integer array.  */ 
void slice( int array[], int first, int last) 
{ 
    int retarray[last-first]; 
    
    int i ; 
        
    printf("Getting slice[%d:%d] of array \n", first, last); 
    printf("(Elements %d to %d of array.) \n", first, last);    
    puts("Here is the slice array... ");          
                
    for(i=first; i<last+1; i++)
    {     
       retarray[i-first] = array[i] ;     
       printf("Element[%d] is %d \n", i-first, retarray[i-first] );                  
    }     
                                                                 
}  


/*  Function to return a slice from a character array.  */ 
void slice2(char array[], int first, int last) 
{ 
    char retarray[last-first]; 
           
    int i ; 
        
    printf("Getting slice[%d:%d] of array \n", first, last); 
    printf("(Elements %d to %d of array.) \n", first, last);    
    puts("Here is the slice array... ");          
                
    for(i=first; i<last+1; i++)
    {     
       retarray[i-first] = array[i] ;                     
       printf("Element[%d] is %c \n", i-first, retarray[i-first] );                  
    }     
                                                                 
}  



int main(void) 
{ 
   /*  Declare an array and fill it with data. */     
   int myarray[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29} ;    

   char charray[] = "Mary had a little lamb" ; 
            
   slice(myarray, 3, 6); 
   slice2(charray, 2, 12); 
   
   return 0 ; 
} 


    
 




