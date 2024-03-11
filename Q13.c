#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize an array of strings
    char *strings[] = {"apple", "banana", "orange", "apple", "grape", "banana", "apple"};
    int numStrings = sizeof(strings) / sizeof(strings[0]);

    // Check for duplicate strings
    printf("Duplicate strings in the array:\n");
    for (int i = 0; i < numStrings - 1; i++) {
        for (int j = i + 1; j < numStrings; j++) {
            if (strcmp(strings[i], strings[j]) == 0) {
                printf("%s\n", strings[i]);
                break; // Only print each duplicate once
            }
        }
    }

    return 0;
}
