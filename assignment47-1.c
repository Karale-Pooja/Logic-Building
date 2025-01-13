/*
Write a program which accept file name from user and open that file in read mode
i/p demo.txt
o/p  successufully opened
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};
    
    int fd = 0;

    printf("Please enter the file name that you want to open\n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDONLY);

    read(fd,Arr,8);

    printf("Data from the file is : %s\n",Arr);
    
    read(fd,Brr,5);

    printf("Data from the file is : %s\n",Brr);

    return 0;
}