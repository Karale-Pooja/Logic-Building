/*
write a java program which accept N from user and accept 
one another number as NO, return index of first occurance of
that NO.

i/p : N : 3
No : 66
elements : 11 44 66
o/p :- 2
*/

import java.util.Scanner;
class Numbe{
    public int FirstOcc(int ar[], int iNo)
    {
       for(int i =0;i< ar.length;i++)
       {
        if(ar[i]==iNo)
        {
            return i;
        }
       }
       return -1;
    }
}
class assignment39_2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter N number:");
        int N = scanner.nextInt();

        System.out.println("Enter number to be searched for index:");
        int No = scanner.nextInt();

        int[] elements = new int[N];

        System.out.println("Enter " + N + " elements:");
        for (int i = 0; i < N; i++) {
            elements[i] = scanner.nextInt();
        }

        Numbe numbe = new Numbe();
        int result = numbe.FirstOcc(elements, No);

      if (result != -1) {
            System.out.println(No + " is present at index " + result);
        } else {
            System.out.println(No + " is not present in the array");
        }

        scanner.close();
    }
}