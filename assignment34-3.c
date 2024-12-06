/*
write a program which accept one number and position from user
and  on that bit . return modified number
i/p 10 3
o/p 14
*/
#include <stdio.h>

typedef unsigned int UINT;


UINT OnBit(UINT iNo, int iPos) {
  
    UINT mask = 1 << iPos; 

    return (iNo | mask);
}

int main() {
    UINT value;
    int position;

    printf("Enter a number: ");
    scanf("%u", &value);
    printf("Enter the position to turn on (0-based index): ");
    scanf("%d", &position);

   
    UINT modifiedValue = OnBit(value, position);

    printf("Modified number after turning on bit at position %d: %u\n", position, modifiedValue);

    return 0;
}