/*
write a recursive c program which accept number from user and
return smallest digit
input  5557795432
output : 9
*/
#include <stdio.h>


int Min(int iNo) {
   
    if (iNo < 10) {
        return iNo;
    }


    int lastDigit = iNo % 10;
    
    
    int smallestInRest = Min(iNo / 10);
    
    
    return (lastDigit < smallestInRest) ? lastDigit : smallestInRest;
}

int main() {
    int iRet = 0;
    int ivalue = 0;

    printf("Enter the number: ");
    scanf("%d", &ivalue);

    iRet = Min(ivalue);

    printf("Output: %d\n", iRet);
    return 0;
}