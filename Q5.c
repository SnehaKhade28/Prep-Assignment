#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int uppercase = 0, lowercase = 0, digits = 0, others = 0;

    printf("Enter a string: ");

    // Read characters until newline character is encountered
    while ((ch = getchar()) != '\n') {
        // Check if the character is uppercase
        if (isupper(ch)) {
            uppercase++;
        }
        // Check if the character is lowercase
        else if (islower(ch)) {
            lowercase++;
        }
        // Check if the character is a digit
        else if (isdigit(ch)) {
            digits++;
        }
        // All other characters
        else {
            others++;
        }
    }

    // Display appropriate messages
    printf("Uppercase characters: %d\n", uppercase);
    printf("Lowercase characters: %d\n", lowercase);
    printf("Digits: %d\n", digits);
    printf("Other characters: %d\n", others);

    return 0;
}
