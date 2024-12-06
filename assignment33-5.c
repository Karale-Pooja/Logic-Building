/*
write a program which accept one number from user and 
on first 4 bits . return modified number
i/p 73
o/p 79
*/
#include <stdio.h>

typedef unsigned int UINT;

UINT setFirst4Bits(UINT iNO) {
    // Create a mask with the first 4 bits set to 1
    UINT mask = 0xF; // 0xF is 1111 in binary
    
    // Use bitwise OR to set the first 4 bits of iNO
    return (iNO | mask); // This will turn on the first 4 bits
}

int main() {
    UINT value;

    // Accept input from the user
    printf("Enter a number: ");
    scanf("%u", &value);

    // Call the setFirst4Bits function to get the modified number
    UINT modifiedValue = setFirst4Bits(value);

    // Display the modified number
    printf("Modified number after setting the first 4 bits: %u\n", modifiedValue);

    return 0;
}