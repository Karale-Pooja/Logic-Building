/*
write a program which checks whether 7th, 8th ,9th bit
is on or off.


*/
#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo) {
    
    UINT mask = (1 << 6 | 1<< 7 | 1<< 8); 
    if ((iNo & mask) == mask){
        return TRUE;  
    } else {
        return FALSE; 
    }
}

int main() {
    UINT value;

    // Accept input from the user
    printf("Enter a number: ");
    scanf("%u", &value);

    // Check the 15th bit
    if (ChkBit(value)) {
        printf("7 . 8 ,9 th bit is ON.\n");
    } else {
        printf("7 , 8 , 9 th bit is OFF.\n");
    }

    return 0;
}