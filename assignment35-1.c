/*
write a program which accept one number from user and count number
of on(1) bits in it without using % and / operator.

i/p 11
o/p 3
*/
#include <stdio.h>
typedef unsigned int UINT;
int count_one_bits(UINT iNo) {
    int count = 0;
    
  
    while (iNo > 0) {
       
        count += (iNo & 1);
       
        iNo= iNo >> 1;
    }
    
    return count;
}

int main() {
  UINT number;

 
    printf("Enter a number: ");
    scanf("%u", &number);
    

    int result = count_one_bits(number);
    

    printf("Number of 1 bits: %d\n", result);
    
    return 0;
}