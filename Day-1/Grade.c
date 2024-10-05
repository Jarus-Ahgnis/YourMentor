#include <stdio.h>

int main() {
    float m; // m = marks
    char grade;  // g = grades

    printf("Enter the student's marks: ");
    scanf("%f", &m);
    //switch statement to determine the grade
    switch ((int) m/ 10) // (int) = cast the result of the expresssion to an integer
     {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F'; // Fail
    }

    printf("Student's grade: %c\n", grade);

    return 0;
}
