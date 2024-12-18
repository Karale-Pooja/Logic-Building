/*
write a recursive c program which display below pattern

output : a b c d e f
*/
#include<stdio.h>

void display(char ch)
{
if(ch > 'f')
{
    return ;
}
printf("%c\n",ch);

display(ch + 1);
}
int main()
{
    display('a');

    printf("\n");
    return 0;
}