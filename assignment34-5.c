/*
write a program which accept one number and position from user
and  toggle contents of first and last nibble of the number. return modified number

*/
#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleNibbles(UINT iNo) {

    UINT firstNibble = (iNo >> 28) & 0x0F;  
    UINT lastNibble = iNo & 0x0F;           
   
    iNo = iNo & 0xFFFFFFF0;  // Clear the first nibble
    iNo = iNo & 0xFFFFFFF0;  // Clear the last nibble

    // Swap the nibbles
    iNo = iNo | (lastNibble << 28); // Place last nibble in the first nibble position
    iNo = iNo | firstNibble;        // Place first nibble in the last nibble position

    return iNo; // Return the modified number
}

int main() {
    UINT value;

    // Accept input from the user
    printf("Enter a number: ");
    scanf("%u", &value);

    // Call the ToggleNibbles function to get the modified number
    UINT modifiedValue = ToggleNibbles(value);

    // Display the modified number
    printf("Modified number after toggling first and last nibbles: %u\n", modifiedValue);

    return 0;
}