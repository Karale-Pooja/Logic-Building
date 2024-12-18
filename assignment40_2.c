/*
write a recursive c program which display below pattern

output :  1 2 3 4 5
*/
#include<stdio.h>

void display(int no)
{
if(no == 0)
{
    return;
}
display(no - 1);
printf("%d ", no);
}
int main()
{
    display(5);

    printf("\n");
    return 0;
}