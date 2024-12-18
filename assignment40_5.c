/*
write a recursive c program which display below pattern

output : * * * * *
*/
#include<stdio.h>

void display(int iNo)
{
if(iNo == 0)
{
    return ;
}
printf("* ");

display(iNo - 1);
}
int main()
{
    display(5);

    printf("\n");
    return 0;
}