#include<stdio.h>

int main() {
 int x;

 printf("value of x before=%d", x); // returns a garbage value, value prev stored at the place in the memory, user does not input this value
 scanf("%d", x);                    // scanf gives the input , & defines the address of the input 
 printf("value of x after=%d", x);  // printf gives the output 

     
  
 return 0;

}