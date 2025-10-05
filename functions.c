int n,m;

#include<stdio.h>
void add();

int main () {

    printf("enter n:");
    scanf("%d", &n);

    printf("enter m:");
    scanf("%d", &m);

    add();

}

void add() {
    int sum;
    sum= n+m;
    printf("sum= %d", sum);

}

