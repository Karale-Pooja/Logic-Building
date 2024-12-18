/*
write a recursive c program which accept string from user and
count number of characters
input  hello
output : 5
*/
#include <stdio.h>

int Strlen(char *str) {
  
    if (*str == '\0') {
        return 0 ;
    }


  
    return 1 +  Strlen(str+1);
}

int main() {
    int iRet = 0;
    char arr[20];

    printf("Enter the string: ");
    scanf("%s",arr);

    
    iRet = Strlen(arr);

     printf("output  %d\n", iRet);
    return 0;
}