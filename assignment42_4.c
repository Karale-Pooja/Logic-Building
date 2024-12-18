/*
write a recursive c program which acceptnumber from user and
return factorial.
input  5
output : 120
*/
#include <stdio.h>

int Fact(int iNo) {
  
    if (iNo == 0) {
        return 1 ;
    }


  
    return iNo * Fact(iNo -1);
}

int main() {
    int iRet = 0;
   int ivalue = 0;

    printf("Enter the string: ");
    scanf("%d",&ivalue);

    
    iRet = Fact(ivalue);

     printf("output  %d\n", iRet);
    return 0;
}