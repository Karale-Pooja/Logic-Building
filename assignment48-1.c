/*
write a program which accepts file name from user and count number of capital characters from that file

input : demo.txt
output : Number of capital characters are 23
*/
#include <stdio.h>
#include <stdlib.h>

int CountCapital(char FName[]) {
    FILE *fp;
    int count = 0;
    char ch;

    // Open the file in read mode
    fp = fopen(FName, "r");
    if (fp == NULL) {
        printf("Error: Unable to open file %s\n", FName);
        return -1;
    }

    // Read through the file to count capital characters
    while ((ch = fgetc(fp)) != EOF) {
        // Check if the character is uppercase
        if (ch >= 'A' && ch <= 'Z') {
            count++;
        }
    }

    // Close the file
    fclose(fp);
    
    // Return the count of capital characters
    return count;
}

int main() {
    char FileName[30];
    int iRet = 0;

    printf("Enter file name: ");
    // Use %s to read a string as filename
    scanf("%s", FileName);

    iRet = CountCapital(FileName);
    if (iRet != -1) { // To avoid printing when there is an error
        printf("Number of capital characters are %d\n", iRet);
    }

    return 0;
}