#include <stdio.h>

int main() {
    
    double a, b, c;
    char operator;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (operator) {
        case '+':
            c = a + b;
        break;
        case '-':
            c = a - b;
        break;
        case '*':
            c = a * b;
        break;
        case '/':
            if (b != 0) {
                c = a / b;
            } else {
                printf("Error !!\n");
                return 1;  // Exit
            }
        break;
        default:
            printf("Invalid operator !!\n");
            return 1;     // Exit
    }

    printf("Result: %.2lf\n", c);

    return 0;
}
