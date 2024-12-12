/*
write a java program which accept N  numbers from user and accept
Range, Display all elements from that range

i/p : N : 6
Start: 60
End : 90
Elements: 85 66 3 76 93 88
output : 66 76 88
*/

import java.util.Scanner;
class Number
{
   public void Display(int ar[], int iStart, int iEnd)
    {
        for(int i = 0; i < ar.length; i++)
        {
            if(ar[i] >= iStart && ar[i] <= iEnd)
            {
                System.out.print(ar[i] + " ");
            }
        }
    }
}
class assignment39_4{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter N number:");
        int N = scanner.nextInt();

        System.out.println("Enter the start number");
        int iStart = scanner.nextInt();

          System.out.println("Enter the End number");
        int iEnd = scanner.nextInt();

        int[] elements = new int[N];

        System.out.println("Enter " + N + " elements:");
        for (int i = 0; i < N; i++) {
            elements[i] = scanner.nextInt();
        }

        Number number = new Number();
      number.Display(elements, iStart,iEnd);

      
        scanner.close();
    }
}