#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char *str) {
    int length = strlen(str);
    int i, j;
    char temp;

    // Loop to swap characters from start and end
    for (i = 0, j = length - 1; i < j; i++, j--) {
        // Swap characters
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing newline character
    str[strcspn(str, "\n")] = '\0';

    // Reverse the string
    reverseString(str);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
