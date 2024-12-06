/*
write a program which accept one number and position from user
and check whether bit at that position is on or off. 
if  bit is one return true otherwise return false
i/p 10 2
o/p true
*/
#include <stdio.h>
#include <stdbool.h> // Include for bool type

typedef unsigned int UINT;

// Function to check if the bit at position iPos in number iNo is on (1) or off (0)
bool ChkBit(UINT iNo, int iPos) {
    // Create a mask by shifting 1 to the left by iPos positions
    UINT mask = 1 << iPos;

    // Use bitwise AND to check if the bit at iPos is set
    if (iNo & mask) {
        return true; // The bit is on
    } else {
        return false; // The bit is off
    }
}

int main() {
    UINT value;
    int position;

    // Accept input from the user
    printf("Enter a number: ");
    scanf("%u", &value);
    printf("Enter the position to check (0-based index): ");
    scanf("%d", &position);

    // Call the ChkBit function to check the specified bit
    bool isBitOn = ChkBit(value, position);

    // Output the result
    if (isBitOn) {
        printf("True\n"); // Bit is on
    } else {
        printf("False\n"); // Bit is off
    }

    return 0;
}