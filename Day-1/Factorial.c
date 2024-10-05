#include <stdio.h>

int main() {
    int n;
    unsigned long long f = 1; // Initialize with 1 (since 0! = 1)

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            f*= i; // Multiply by each positive integer from 1 to 'number'
        }
        printf("Factorial of %d = %llu\n", n, f);
    }

    return 0;
}
