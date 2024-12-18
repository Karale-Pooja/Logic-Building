/*
write a recursive c program which display below pattern
input  5
output :5 * 4 * 3 * 2 * 1 *
*/
#include <stdio.h>

void display(int no) {
    
    if (no == 0) {
        return;
    }

 
    printf("%d *  ", no);

  
    display(no - 1);
}

int main() {
    int ivalue = 0;
    printf("Enter the number: ");
    scanf("%d", &ivalue);

    
    display(ivalue);

    printf("\n");
    return 0;
}