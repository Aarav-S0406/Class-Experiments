#include<stdio.h>

int main () {

    int r;
    int c;
    int i=1;

    for (c=3; c>=0; c--) {
        printf(" ");
    
        for (r=3; r>=0; r--) {
         printf("%d\t", i);
         i++;
        }

        printf("\n");
    }

    return 0;
}