#include<stdio.h>
int main() {
    
    for(int r=1;r<=4;r++) {
        for(int c=4;c>=r;c--) {
            printf("*\t");
        }
        printf("\n");
        for(int space=1;space<=r;space++) {
            printf("\t");
        }
    }
    return 0;
}