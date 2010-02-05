

/*  slice.c  */  

/*  Extract a slice from an array.  */  
/*  This code is released to the public domain.  */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  Function to return the tail of an array.  */ 
void slice( int *array, int length, int first, int last) 
{ 
    int i ; 
    
    int slicelength = last - first + 1; 
    /* Create an array to stroe the "tail" elements. */     
    int slice[slicelength] ; 
    
    for(i=0; i<slicelength; i++)
    {  
       slice[i] = array[i+first] ;       
       printf("Slicearray[%d] is %d \n", i, slice[i]);          
    }     
                    
} ; 



int main(void) 
{ 
   /*  Declare an array and fill it with data. */     
   int myarray[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29} ; 
   int length = sizeof(myarray) / sizeof(*myarray);     
    
   printf("Length of myarray is %d \n", length);   
   slice( myarray, length, 3, 6); 
   /* printf("myarray[%d] \n", myarray[0]);  */    
   return 0 ; 
} 


    
 




