/*
write a program which checks whether 15th bit
is on or off.


*/
#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo) {
    // Define mask for the 15th bit (0-based index) using bitwise left shift
    UINT mask = (1 << 14); // 15th bit corresponds to 2^14

    // Check if the 15th bit is ON
    if (iNo & mask) {
        return TRUE;  // The 15th bit is ON
    } else {
        return FALSE; // The 15th bit is OFF
    }
}

int main() {
    UINT value;

    // Accept input from the user
    printf("Enter a number: ");
    scanf("%u", &value);

    // Check the 15th bit
    if (ChkBit(value)) {
        printf("15th bit is ON.\n");
    } else {
        printf("15th bit is OFF.\n");
    }

    return 0;
}