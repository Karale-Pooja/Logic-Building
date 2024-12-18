/*
write a recursive c program which acceptnumber from user and
return product of digit.
input  552
output : 50
*/
#include <stdio.h>

int Mult(int iNo) {
  
    if (iNo == 0) {
        return 1 ;
    }


  
    return(iNo % 10) * Mult(iNo /10);
}

int main() {
    int iRet = 0;
   int ivalue = 0;

    printf("Enter the number: ");
    scanf("%d",&ivalue);

    
    iRet = Mult(ivalue);

     printf("output  %d\n", iRet);
    return 0;
}