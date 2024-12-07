/*
write a program which checks whether 9th  or  
12th bit is on or off
i/p 257
o/p  true

*/
#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo) {

       return ((iNo & (1 << 8)) != 0) || ((iNo & (1 << 11)) != 0);
}

int main() {
    UINT value;

    // Accept input from the user
    printf("Enter a number: ");
    scanf("%u", &value);

    // Check the bits
    if (ChkBit(value)) {
        printf(" bits are ON.\n");
    } else {
        printf(" bits is OFF.\n");
    }

    return 0;
}
