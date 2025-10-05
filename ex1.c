#include<stdio.h>  // stdio.h is a predirective library. these are called headers in c
                   // stdio is short for standard input output, .h is the extension 
int main () {      // main function, program wont execute without it, there can only be one main function in a program
    
    int x;
   printf("enter value of x");
    scanf("%d", &x);
    printf("address of x=%d", x);
   
 return 0;     
    
}