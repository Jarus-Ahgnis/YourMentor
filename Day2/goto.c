#include <stdio.h>

int main() {
    int n;

    printf("Enter numbers (negative to exit):\n");

    while (1) {
        scanf("%d", &n);

        if (n < 0)
            goto sweety; // --> Skip to the label(sweety) , if the number is negative

        printf("Non-negative number: %d\n", n);
    }

sweety:
    printf("Negative number! . Exiting....\n");

    return 0;
}
