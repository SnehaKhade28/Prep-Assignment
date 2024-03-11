#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

// Function to compare two strings for qsort
int compareStrings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int numStudents = 0;

    // Reading names of students
    printf("Enter names of students (up to 10), type 'done' to finish:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name %d: ", i + 1);
        if (fgets(nameOfStudents[i], MAX_NAME_LENGTH, stdin) == NULL)
            break;
        // Removing newline character if present
        nameOfStudents[i][strcspn(nameOfStudents[i], "\n")] = '\0';
        if (strcmp(nameOfStudents[i], "done") == 0)
            break;
        numStudents++;
    }

    // Sorting the array of names
    qsort(nameOfStudents, numStudents, sizeof(nameOfStudents[0]), compareStrings);

    // Displaying sorted names
    printf("\nSorted list of names:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
