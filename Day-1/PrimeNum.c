#include <stdio.h>
#include <stdbool.h> // using boolean

bool isPrime(int num) { //check if a number is prime
    if (num <= 1) {
        return 0; // Since 0 and 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // not  a prime
        }
    }
    return 1; // prime
}

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
