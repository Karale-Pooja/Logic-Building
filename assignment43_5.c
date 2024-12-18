/*
write a recursive c program which accept number from user and
return reverse number
input  532
output : 235
*/
#include <stdio.h>

int reverseNumber(int num, int rev) {
    // Base case: if the number is reduced to 0, return the reversed number
    if (num == 0) {
        return rev;
    }
    
    // Get the last digit and add it to the reversed number
    rev = rev * 10 + (num % 10);
    
    // Recursive call with the number divided by 10
    return reverseNumber(num / 10, rev);
}

int main() {
    int value = 0;
    printf("Enter the number: ");
    scanf("%d", &value);
    
    int reversedValue = reverseNumber(value, 0);
    
    printf("Output: %d\n", reversedValue);
    return 0;
}