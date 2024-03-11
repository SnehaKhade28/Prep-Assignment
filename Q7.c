#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;

    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        printf("Please provide a number as a command-line argument.\n");
        return 1; // Return error status
    }

    num = atoi(argv[1]);

    printf("Multiplication Table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
