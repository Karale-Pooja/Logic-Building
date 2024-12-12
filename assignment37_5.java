/*
write a java program which accept N number from user and  
display all such elements which are multiplies of 11
o.

i/p : N : 6
elments : 85 66 3 80 55 88
o/p :  66  55 88
*/
import java.util.Scanner;

class ArrayDemo
{
    public void Difference(int Arr[])
    {
for(int number: Arr)
{
    if(number % 11 == 0)
    {
        System.out.println("multiplies of 11 :" + number );

    }
}
    }
}

class assignment37_5
{
    public static void main(String A[])
    {
Scanner scanner1 = new Scanner(System.in);

System.out.print("Enter N Number");
int N = scanner1.nextInt();

int elements[] = new int[N];

System.out.println("Enter" + N  + "Numbers");

for(int i = 0;i< N; i++)
{
    elements[i] = scanner1.nextInt();
}

ArrayDemo Arrayobj = new ArrayDemo();
Arrayobj.Difference(elements);

scanner1.close();
    }
}