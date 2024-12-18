/*
write a recursive c program which display summestion of given input 
input  55
output :10
*/
#include <stdio.h>

int display(int no) {
  
    if (no == 0) {
        return 0 ;
    }


  
    return (no % 10) +  display(no /10);
}

int main() {
    int ivalue = 0;
    printf("Enter the number: ");
    scanf("%d", &ivalue);

    
    int Result =display(ivalue);

     printf("Output: %d\n", Result);
    return 0;
}