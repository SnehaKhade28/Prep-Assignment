#include <stdio.h>

int main() {
    int marks[5];
    float total = 0;
    float average;
    char grade;

    // Input marks for each subject
    printf("Enter marks for five subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculate average marks
    average = total / 5.0;

    // Assign grade based on average marks
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else if (average >= 50) {
        grade = 'E';
    } else {
        grade = 'F'; // Fail
    }

    // Display the result
    printf("Average marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
