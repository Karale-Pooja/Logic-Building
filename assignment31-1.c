
/*
write a program which accept string from user and copy that
charcters of that string into another string in reverse order
i/p : "Marvellous Python"
Output : "nohtyP suollevraM"
*/

#include<stdio.h>
#include<string.h>

void StrCpyRev(char *src,char *dest)
{
  int length = strlen(src);

  for(int i =0; i<length;i++)
  {
    dest[i] = src[length - 1 -i];
  }
  dest[length] = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];    //Empty string

    StrCpyRev(arr,brr);

    printf("%s",brr); 

    return 0 ;


}