#include <stdio.h>

int ISPRIME(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {

    int low, high;
    printf("Enter lower limit: ");
    scanf("%d", &low);
    printf("Enter upper limit: ");
    scanf("%d", &high);

    printf("Prime numbers between %d and %d are:\n", low, high);

    for (int n = low; n <= high; n++) {
        if (ISPRIME(n))
            printf("%d ", n);
    }
    printf("\n");

    return 0;
}
