/*
write a program which checks whether first and last bit is on
or off. first bit means bit number 1 and last bit means bit 
number 32


*/
#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo) {
    // Define masks for the first (1st) bit and last (32nd) bit
    UINT firstBitMask = 1;          // 1st bit (2^0)
    UINT lastBitMask = 1 << 31;     // 32nd bit (2^31)

    // Check if the first and last bits are ON
    if ((iNo & firstBitMask) && (iNo & lastBitMask)) {
        return TRUE; // Both the first and last bits are ON
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
        printf("Both the first and last bits are ON.\n");
    } else {
        printf("At least one of the first or last bits is OFF.\n");
    }

    return 0;
}
