#include<stdio.h>
#include<stdlib.h>

int main(int argc ,char *argv[])
{
    if (argc < 2) {
        printf("Usage: %s <num1> <num2> ... <numN>\n", argv[0]);
        return 1; // Return error status
    }

    int max = atoi(argv[1]);
    for(int i = 2 ;i< argc;i++)
    {
        int num = atoi(argv[i]); // Convert current argument to integer
        if (num > max) { // Check if current number is greater than max
            max = num; // Update max if current number is greater
        }
    }
    
    printf("Maximum number is: %d\n", max);

    return 0; // Return success status
}