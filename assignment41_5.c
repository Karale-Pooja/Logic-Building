/*
write a recursive c program which display below pattern
input  6
output : a b c d e f
*/
#include <stdio.h>

void display(int no, char ch) {
    // Base case: if no is 0, return
    if (no == 0) {
        return;
    }

    // Print the current character
    printf("%c ", ch);

    // Recursive call with no - 1 and the next character
    display(no - 1, ch + 1);
}

int main() {
    int ivalue = 0;
    printf("Enter the number: ");
    scanf("%d", &ivalue);

    // Call display function starting with 'A'
    display(ivalue, 'a');

    printf("\n");
    return 0;
}