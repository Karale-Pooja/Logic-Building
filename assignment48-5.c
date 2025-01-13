/*
write a program which accepts file name and one count from user and
read number of characters from starting position

input : demo.txt  12
output : display first 12 chracters from demo.txt
*/
#include <stdio.h>
#include <stdlib.h>

void DisplayN(char FName[], int iSize) {
    FILE *fp;
    char *buffer;

    // Open the file in read mode
    fp = fopen(FName, "r");
    if (fp == NULL) {
        printf("Error: Unable to open file %s\n", FName);
        return;
    }

    // Allocate memory for the buffer
    buffer = (char *)malloc((iSize + 1) * sizeof(char)); // +1 for null terminator
    if (buffer == NULL) {
        printf("Error: Memory allocation failed\n");
        fclose(fp);
        return;
    }

    // Read the specified number of characters from the file
    size_t bytesRead = fread(buffer, sizeof(char), iSize, fp);
    buffer[bytesRead] = '\0'; // Null-terminate the string

    // Display the characters read
    printf("First %d characters from %s:\n", iSize, FName);
    printf("%s\n", buffer);

    // Close the file
    fclose(fp);

    // Free the allocated memory
    free(buffer);
}

int main() {
    char FileName[30];
    int iValue = 0;

    // Get the filename from the user
    printf("Enter file name: ");
    scanf("%29s", FileName); // Using %29s to avoid buffer overflow

    // Get the number of characters to display from the user
    printf("Enter number of characters: ");
    scanf("%d", &iValue);

    // Call the DisplayN function
    DisplayN(FileName, iValue);

    return 0;
}//