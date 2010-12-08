
/*  length.c  */  

/*  Get the length of an array  */ 
/*  This code is released to the public domain  */  


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>


int main()
{
    int myarray[] = {32, 67, 25, 48, 5, 17, 23}; 
    int length = sizeof(myarray) / sizeof(*myarray);    
    printf("length of myarray is %d \n", length); 
    return 0; 
}



