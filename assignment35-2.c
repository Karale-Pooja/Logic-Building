/*
write a program which accept  2 number from user and 
display position of common bits from that 2 numbers

i/p 10 15
o/p  2  4
*/

#include <stdio.h>

void display_common_bit_positions(unsigned int num1, unsigned int num2) {
    unsigned int common_bits = num1 & num2;  // Get common bits by AND operation
    int position = 1;  // Bit position starts from 1

    // Iterate through each bit
    while (common_bits > 0) {
        // Check if the least significant bit is 1
        if (common_bits & 1) {
            printf("%d ", position); // Print the position (1-indexed)
        }
        common_bits >>= 1; // Right shift to check the next bit
        position++;  // Move to the next bit position
    }
}

int main() {
    unsigned int number1, number2;

    // Read two numbers from the user
    printf("Enter two numbers: ");
    scanf("%u %u", &number1, &number2);

    printf("Positions of common bits: ");
    display_common_bit_positions(number1, number2);

    return 0;
}