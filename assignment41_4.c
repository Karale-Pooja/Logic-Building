/*
write a recursive c program which display below pattern
input  6
output : A B C D E F
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
    display(ivalue, 'A');

    printf("\n");
    return 0;
}