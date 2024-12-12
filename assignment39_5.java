/*
write a java program which accept N  numbers from user and 
return product of all odd numbers
i/p : N : 4
Elements: 8 2 3 2
output : 32
*/

import java.util.Scanner;
class Number
{
   public int Product(int ar[])
    {
        int mul = 1;
        for(int i = 0; i < ar.length; i++)
        {
            if(ar[i] % 2 !=0)
            {
                mul *= ar[i];
            }
        }
        return mul;
    }
}
class assignment39_5{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter N number:");
        int N = scanner.nextInt();

        System.out.println("Enter " + N + " elements:");
        int[] elements = new int[N];
        for (int i = 0; i < N; i++) {
            elements[i] = scanner.nextInt();
        }

        Number number = new Number();
        int iret = number.Product(elements);
        
        if(iret == 0)
            System.out.println("Product is 1");
        else
            System.out.println("Product is " + iret);

        scanner.close();
    }
}