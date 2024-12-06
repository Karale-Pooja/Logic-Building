/*
write a program which accept one number from user and 
off 7th , 10th bit of that number if it is on. return modified number
i/p 577
o/p 1
*/

#include <stdio.h>

typedef unsigned int UINT;

UINT offBit(UINT iNO) {
  
    UINT mask =(1<<6) |(1 << 9); 
    //
    return (iNO & ~mask); }

int main() {
    UINT value;

    printf("Enter a number: ");
    scanf("%u", &value);

    UINT modifiedValue = offBit(value);

    printf("Modified number after turning off the 7th bit: %u\n", modifiedValue);

    return 0;
}