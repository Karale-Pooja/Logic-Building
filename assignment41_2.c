/*
write a recursive c program which display below pattern
input  5
output : 1  2 3 4 5
*/
#include<stdio.h>

void display(int iNo)
{
if(iNo == 0)
{
    return ;
}

display(iNo - 1);
printf("%d",iNo);

}
int main()
{
    int ivalue =0;
    printf("Enter the number");
scanf("%d",&ivalue);
    display(ivalue);

    printf("\n");
    return 0;
}