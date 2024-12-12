/*
write a java program which accept N number from user and  
all such elements which are even and divisible by 5
o.

i/p : N : 6
elments : 85 66 3 80 93 88
o/p :  80
*/
import java.util.Scanner;

class ArrayDemo
{
    public void Difference(int Arr[])
    {
for(int number: Arr)
{
    if(number % 2 ==0 && number % 5 == 0)
    {
        System.out.println("Divisibile by 5 and even number:" + number );

    }
}
    }
}

class assignment37_3
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