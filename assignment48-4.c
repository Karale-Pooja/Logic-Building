/*
write a program which accepts file name and one character from user and
 count number of occurances of that character from that file

input : demo.txt  'M'
output : frequency of M is 7
*/
#include <stdio.h>
#include <stdlib.h>

int CountChar(char FName[], char Ch) {
    FILE *fp;
    int count = 0;
    char ch;

    // Open the file in read mode
    fp = fopen(FName, "r");
    if (fp == NULL) {
        printf("Error: Unable to open file %s\n", FName);
        return -1;
    }

    // Read data from file and count occurrences of Ch
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == Ch) {
            count++;
        }
    }

    // Close the file
    fclose(fp);

    // Return the frequency
    return count;
}

int main() {
    char FileName[30];
    int iRet = 0;
    char cValue;

    // Get the filename from the user
    printf("Enter file name: ");
    scanf("%29s", FileName); // Using %29s to avoid buffer overflow

    // Clear the newline from buffer (if any)
    getchar(); 

    // Get the character from the user
    printf("Enter character to count: ");
    scanf("%c", &cValue);

    // Call the CountChar function
    iRet = CountChar(FileName, cValue);

    if (iRet != -1) {
        printf("Frequency of '%c' is %d\n", cValue, iRet);
    }

    return 0;
}//////////