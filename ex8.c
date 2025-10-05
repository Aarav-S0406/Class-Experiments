#include<stdio.h>

int main() {

    int i=1;
    printf("%d %d %d %d", i, ++i, i++, i); // i++ post increment: return old value and perform increment by 1
   // ++i pre increment: perform increment then return new value
 return 0;
}

// output: 3313 