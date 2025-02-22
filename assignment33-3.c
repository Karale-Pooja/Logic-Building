/*
write a program which accept one number from user and 
toggle  7th bit of that number return modified number
i/p 137
o/p 201
*/

#include <stdio.h>

typedef unsigned int UINT;

UINT offBit(UINT iNO) {
  
    UINT mask =(1<<6) ;
    //
    return (iNO ^ mask); }

int main() {
    UINT value;

    printf("Enter a number: ");
    scanf("%u", &value);

    UINT modifiedValue = offBit(value);

    printf("Modified number after turning off the 7th bit: %u\n", modifiedValue);

    return 0;
}