/*
write a recursive c program which display below pattern

output :  A B C D E F
*/
#include<stdio.h>

void display(char ch)
{
if(ch > 'F')
{
    return ;
}
printf("%c\n",ch);

display(ch + 1);
}
int main()
{
    display('A');

    printf("\n");
    return 0;
}