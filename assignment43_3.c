/*
write a recursive c program which accept number from user and
count number of small characters
input  POOjaAA
output : 2
*/
#include <stdio.h>


int CountLowercase(char *str) {

    if (*str == '\0') {
        return 0; 
    }

    
    int count = (*str >= 'a' && *str <= 'z') ? 1 : 0;


    return count + CountLowercase(str + 1);
}

int main() {
    char arr[100]; 

    printf("Enter the string: ");
    fgets(arr, sizeof(arr), stdin); // Read string including spaces if present

    int result = small(arr);

    printf("Output: %d\n", result);
    return 0;
}