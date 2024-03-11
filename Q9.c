#include <stdio.h>

// Function to print binary equivalent
void printBinary(int num) {
    int bits = sizeof(int) * 8; // Number of bits in an integer
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

// Function to print octal equivalent
void printOctal(int num) {
    printf("%o\n", num);
}

// Function to print hexadecimal equivalent
void printHexadecimal(int num) {
    printf("%x\n", num);
}

int main() {
    int num;

    // Accept an integer number from the user
    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Print binary equivalent
    printf("Binary equivalent: ");
    printBinary(num);

    // Print octal equivalent
    printf("Octal equivalent: ");
    printOctal(num);

    // Print hexadecimal equivalent
    printf("Hexadecimal equivalent: ");
    printHexadecimal(num);

    return 0;
}
