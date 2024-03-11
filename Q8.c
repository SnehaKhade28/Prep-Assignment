#include <stdio.h>
#include <string.h>

// Define a structure for student
struct Student {
    char name[50];
    char rollNo[20];
    float totalMarks;
};

// Function to display student details
void displayStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %s\n", s.rollNo);
    printf("Total Marks: %.2f\n", s.totalMarks);
}

int main() {
    // Declare a variable of type struct Student
    struct Student student;

    // Read student details from the user
    printf("Enter name of the student: ");
    scanf("%s", student.name); // Assuming the name doesn't contain spaces
    printf("Enter roll number of the student: ");
    scanf("%s", student.rollNo);
    printf("Enter total marks obtained by the student: ");
    scanf("%f", &student.totalMarks);

    // Display the student details
    printf("\nStudent Details:\n");
    displayStudent(student);

    return 0;
}
