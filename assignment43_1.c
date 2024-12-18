/*
write a recursive c program which acceptnumber from user and
count white spaces.
input  Hello World ID
output : 2
*/
#include <stdio.h>


int WhiteSpace(char *str) {
   
    if (*str == '\0') {
        return 0;
    }

    
    int count = (*str == ' ') ? 1 : 0;

 
    return count + WhiteSpace(str + 1);
}

int main() {
    int iRet = 0;
    char arr[100]; 

    printf("Enter the string: ");
    fgets(arr, sizeof(arr), stdin); 

 
    iRet = WhiteSpace(arr);

    printf("Output: %d\n", iRet);
    return 0;
}