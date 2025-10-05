//check if number is prime or not

#include<stdio.h>

int main () {

    int a;

    printf("enter number: ");
    scanf("%d", &a);

    if(a%2==0) {
        printf("number is composite");
    }

    else if (a==2) {
        printf("number is prime");
    }


    else {
        printf("number is prime");
    }

    return 0;

}