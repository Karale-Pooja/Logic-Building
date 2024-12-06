/*
write a program which checks whether 5th & 18th  bit
is On or OFF.


*/
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo) {
    // Define bit positions (0-based index)
    UINT mask = (1 << 4) | (1 << 17) ; 

    // Check if the specified bits are ON
    if ((iNo & mask) == mask) {
        return TRUE; // All bits are ON
    } else {
        return FALSE; // At least one of the bits is OFF
    }
}

int main() {
    UINT value;

    // Accept input from the user
    printf("Enter a number: ");
    scanf("%u", &value);

    // Check the bits
    if (ChkBit(value)) {
        printf("5th, 18th bits are ON.\n");
    } else {
        printf("At least one of the 5th, 18th bits is OFF.\n");
    }

    return 0;
}