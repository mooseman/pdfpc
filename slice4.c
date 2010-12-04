

/*  slice.c  */  

/*  Extract a slice from an array.  */  
/*  This code is released to the public domain.  */  

/* Note - look at using strncpy for this.  */  
/*  For example -   */  
/*  #include <string.h>
    #include <stdlib.h>

main()
{
  const char* from = "12345678";
  char *to = (char*) malloc(6);
  strncpy(to, from+2, 5);
}  

*/  



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
void slice2(char *array, int first, int last) 
{ 
    char *retarray = (char*) malloc(last-first);     
      
    int i;   
                       
    printf("Getting slice[%d:%d] of array \n", first, last); 
    printf("(Elements %d to %d of array.) \n", first, last);    
    puts("Here is the slice array... ");          
        
    strncpy(retarray, array+first, last);
                
    for(i=first; i<last+1; i++)
    {                     
       printf("Element[%d] is %c \n", i-first, retarray[i-first] );                  
    }     
         
    free(retarray);  
    retarray = NULL;   
                                                                 
}  



int main(void) 
{ 
   /*  Declare an array and fill it with data. */     
   int myarray[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29} ;    

   char charray[] = "Mary had a little lamb" ; 
            
   slice(myarray, 3, 6); 
   slice2(charray, 2, 7); 
   
   return 0 ; 
} 


    
 




