/*
write a recursive c program which accept number from user and
return larggest digit
input  5557795432
output : 9
*/
#include <stdio.h>

// Recursive function to find the largest digit
int Max(int iNo) {
    // Base case: if the number is less than 10, return the number itself
    if (iNo < 10) {
        return iNo;
    }

    // Get the last digit
    int lastDigit = iNo % 10;

    // Recursive call for the rest of the number
    int largestInRest = Max(iNo / 10);

    // Return the maximum of the last digit and the largest in the rest
    return (lastDigit > largestInRest) ? lastDigit : largestInRest;
}

int main() {
    int iRet = 0;
    int ivalue = 0;

    printf("Enter the number: ");
    scanf("%d", &ivalue);

    iRet = Max(ivalue);

    printf("Output: %d\n", iRet);
    return 0;
}