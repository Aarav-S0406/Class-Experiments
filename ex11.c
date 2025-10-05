#include<stdio.h>
int main() {

    for(int r=4;r>=1;r--) {
        for(int space=1;space<=r;space++) {
            printf(" ");
        }
        for(int c=4;c>=r;c--) {
            printf("*");
        }
        printf("\n");
    }
 return 0;
}