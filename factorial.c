#include <stdio.h>

int recursive(int n) {
    if (n == 0) 
        return 1;
    else 
        return n * recursive(n - 1);
}

int nonrecursive(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result*i;
    }
    return result;
}

int binomial(int n, int r) {
    int numerator = nonrecursive(n);
    int denominator = nonrecursive(r) * nonrecursive(n - r); 
    return numerator / denominator;
}

int main() {
    int n, r;

    printf("Binomial Coefficient Calculator (C(n,r))\n");

    printf("Recursive= %d\n", recursive(5));
    printf("Non recursive= %d\n", nonrecursive(5));

    printf(" n   r   C(n,r)\n");
    printf("----------------\n");

    for (n = 0; n <= 5; n++) { 
        for (r = 0; r <= n; r++) {
            printf("%2d  %2d   %5d\n", n, r, binomial(n, r));
        }
        printf("\n");
    }

    return 0;
}
