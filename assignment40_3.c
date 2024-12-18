/*
write a recursive c program which display below pattern

output :  5 4 3 2 1
*/
#include<stdio.h>

void display(int no)
{
if(no == 0)
{
    return;
}
printf("%d ", no);
display(no - 1);

}
int main()
{
    display(5);

    printf("\n");
    return 0;
}