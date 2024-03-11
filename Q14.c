#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(char *str) {
    int length = strlen(str);
    int i, j;

    // Convert string to lowercase
    for (i = 0; i < length; i++) {
        str[i] = tolower(str[i]);
    }

    // Check for palindrome
    for (i = 0, j = length - 1; i < j; i++, j--) {
        // Skip non-alphabetic characters
        while (!isalpha(str[i]) && i < j) {
            i++;
        }
        while (!isalpha(str[j]) && i < j) {
            j--;
        }
        // If characters at positions i and j are not equal, it's not a palindrome
        if (str[i] != str[j]) {
            return 0;
        }
    }

    // If the loop completes without returning, the string is a palindrome
    return 1;
}

int main() {
    char str[100];

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing newline character
    str[strcspn(str, "\n")] = '\0';

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
