#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countAlphabets(const char *str) {
    int count[26] = {0}; // Array to store the count of each alphabet (case insensitive)

    // Iterate through each character of the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { // Check if the character is an alphabet
            // Convert character to lowercase and increment the count for the respective alphabet
            count[tolower(str[i]) - 'a']++;
        }
    }

    // Print the count of each alphabet
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (count[ch - 'a'] > 0) { // If the count is greater than 0, print the count
            printf("%c : %d\n", toupper(ch), count[ch - 'a']);
        }
    }
}

int main() {
    char str[100];

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing newline character
    str[strcspn(str, "\n")] = '\0';

    // Count occurrences of each alphabet in the string
    printf("Output:\n");
    countAlphabets(str);

    return 0;
}
