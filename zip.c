

/*  zip.c  */  

/*  Code for a zip function.  */  
/*  This code is released to the public domain.  */  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  A simple function tp use with zip  */ 
void func(int arg) 
{ 
   printf("Arg is %d \n", arg); 
}    


/*  Zip function for two numeric arrays.  */ 
void zip( int *array1, int *array2, int length1, int length2, void myfunc) 
{ 
    int i ; 
    /* Test the array lengths, If they are not equal, return an 
     * error message.  */     
    if(length1 != length2) 
      { 
         printf("Arrays not of equal length!");   
      } 
    else 
      {          
         for(i=0; i<length1; i++) 
         { 
            myfunc(array1[i]);
            myfunc(array2[i]);            
         }                        
      } 
         
}; 


int main(void) 
{ 
   /*  Declare an array and fill it with data. */     
   int myarray1[] = {24, 37, 142, 205}; 
   int myarray2[] = {2, 4, 6, 8};
   int len1 = sizeof(myarray1) / sizeof(*myarray1);     
   int len2 = sizeof(myarray2) / sizeof(*myarray2);     
       
   zip( myarray1, myarray2, len1, len2, func); 
   /* printf("myarray[%d] \n", myarray[0]);  */    
   return 0 ; 
   
} 





