/*
write a program which accept one number from user and range of 
positions from user. toggle all bits from  that range
i/p 897 9 13
toggle all bits from position 9 to 13 of i/p number i.e 879

*/
#include <stdio.h>

typedef unsigned int UINT;

// Function to toggle bits in a given range
UINT ToggleBits(UINT number, UINT startPos, UINT endPos) {
    // Create a mask with bits set to 1 from startPos to endPos
    UINT mask = 0;
    
    for (UINT i = startPos; i <= endPos; i++) {
        mask |= (1 << i); // Set the bit at position i
    }

    // Toggle the bits using XOR
    return number ^ mask;
}

int main() {
    UINT value, start, end;

    // Accept input from the user
    printf("Enter a number: ");
    scanf("%u", &value);
    printf("Enter the start and end positions (0-based): ");
    scanf("%u %u", &start, &end);

    // Check validity of positions
    if (start > end) {
        printf("Invalid positions! Start position must be less than or equal to end position.\n");
        return 1; // Exit with error
    }

    // Toggle the bits in the specified range
    UINT result = ToggleBits(value, start, end);

    // Print the result
    printf("After toggling bits from position %u to %u, the new number is: %u\n", start, end, result);

    return 0;
}