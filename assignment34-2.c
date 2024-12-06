/*
write a program which accept one number and position from user
and  off that bit . return modified number
i/p 10 2
o/p 8
*/

#include <stdio.h>
#include <limits.h>

typedef unsigned int UINT;


UINT OffBit(UINT iNo, int iPos) {
   
    UINT mask = ~(1 << iPos); 

    return (iNo & mask);
}

int main() {
    UINT value;
    int position;

    printf("Enter a number: ");
    scanf("%u", &value);
    printf("Enter the position to turn off (0-based index): ");
    scanf("%d", &position);

   
    UINT modifiedValue = OffBit(value, position);


    printf("Modified number after turning off bit at position %d: %u\n", position, modifiedValue);

    return 0;
}