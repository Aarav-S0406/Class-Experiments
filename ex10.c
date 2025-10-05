#include<stdio.h>

int main () {

    int r;
    int c;
    int i=1;

    for (c=0; c<=3; c++) {
        for (r=0; r<=c; r++) {
         printf("%d\t", i);
         i++;
        }

        printf("\n");
    }

    return 0;
}