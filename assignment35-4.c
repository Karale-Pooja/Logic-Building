/*
write a program whichaccept one number , two positions from user and
check whether bit at first or bit at second position is on or off.
i/p 10 3 7 
o/p  true

*/
#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0


BOOL CheckBits(UINT number, UINT pos1, UINT pos2) {

    BOOL bit1 = number & (1 << pos1); // Check bit at pos1
    BOOL bit2 = number & (1 << pos2); // Check bit at pos2

    return (bit1 != 0 || bit2 != 0);
}

int main() {
    UINT value, position1, position2;


    printf("Enter a number: ");
    scanf("%u", &value);
    printf("Enter two positions (0-based): ");
    scanf("%u %u", &position1, &position2);

  
    if (CheckBits(value, position1, position2)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}