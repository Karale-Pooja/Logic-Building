/*
write a java program which accept N number from user and  
all such elements which are divisible by 5 and 3
o.

i/p : N : 6
elments : 85 66 15 80 93 88
o/p :  15
*/
import java.util.Scanner;

class ArrayDemo
{
    public void Difference(int Arr[])
    {
for(int number: Arr)
{
    if(number % 3 ==0 && number % 5 == 0)
    {
        System.out.println("Divisibile by 5 and 3:" + number );

    }
}
    }
}

class assignment37_4
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