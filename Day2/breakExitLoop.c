#include <stdio.h>

int main() {
    int i;  
    int fix = 143;

    printf("Enter numbers (enter %d to exit):\n", fix);

    while (1) {
        scanf("%d", &i);

        if ( i == fix) {
            printf("Exiting the loop. %d! too sweety:)\n", fix);
        break;                 // Exit the loop
        } else {
            printf("You entered: %d\n", i);
        }
    }

    return 0;
}
