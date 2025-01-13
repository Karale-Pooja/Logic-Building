/*
write a program which accepts file name from user and
 count number of white spaces from that file

input : demo.txt
output : Number of white spaces are 13
*/
#include <stdio.h>
#include <stdlib.h>

int CountWhite(char FName[]) {
    FILE *fp;
    int count = 0;
    char ch;

    // Open the file in read mode
    fp = fopen(FName, "r");
    if (fp == NULL) {
        printf("Error: Unable to open file %s\n", FName);
        return -1;
    }

    // Read through the file to count white spaces
    while ((ch = fgetc(fp)) != EOF) {
        // Check if the character is a space or newline
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            count++;
        }
    }

    // Close the file
    fclose(fp);
    
    // Return the count of white spaces
    return count;
}

int main() {
    char FileName[30];
    int iRet = 0;

    printf("Enter file name: ");
    // Use %s to read a string as filename
    scanf("%s", FileName);

    iRet = CountWhite(FileName);
    if (iRet != -1) { // To avoid printing when there is an error
        printf("Number of white spaces are %d\n", iRet);
    }

    return 0;
}///