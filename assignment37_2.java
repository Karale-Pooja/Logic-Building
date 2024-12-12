/*
write a java program which accept N number from user and  
all such elements which are divisible by 5


i/p : N : 6
elments : 85 66 3 80 93 88
o/p : 85 80
*/
import java.util.Scanner;

class ArrayDemo
{
    public void Dispaly(int Arr[])
    {
for(int number : Arr)
{
    if(number % 5 == 0)
    {
        System.out.println(" Divisible by 5 : " +  number);
    }
}
    }
}

class assignment37_2
{
    public static void main(String Arr[])
    {
Scanner scanner = new Scanner(System.in);

System.out.print("Enter N numbers");
int N1 = scanner.nextInt();

int elements[] = new int[N1];

System.out.println("Enter" + N1 + "elements");

for(int i = 0 ; i< N1; i++)
{
    elements[i] = scanner.nextInt();
}

ArrayDemo obj = new ArrayDemo();
obj.Dispaly(elements);

scanner.close();
    }
}