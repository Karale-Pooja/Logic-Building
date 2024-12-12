/*
write a java program which accept number from user and accept 
one another number asNO, check whether NO is present or not.

i/p : N : 3
No : 66
elements : 11 44 66
o/p :- true
*/
import java.util.Scanner;

class Numbe {
    boolean Check(int Arr[], int iNo) {
        for (int i = 0; i < Arr.length; i++) {
            if (Arr[i] == iNo) {
                return true;
            }
        }
        return false;
    }
}

class assignment39_1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter N number:");
        int N = scanner.nextInt();

        System.out.println("Enter number to be searched:");
        int No = scanner.nextInt();

        int[] elements = new int[N];

        System.out.println("Enter " + N + " elements:");
        for (int i = 0; i < N; i++) {
            elements[i] = scanner.nextInt();
        }

        Numbe numbe = new Numbe();
        boolean result = numbe.Check(elements, No);

        if (result) {
            System.out.println(No + " is present in the array");
        } else {
            System.out.println(No + " is not present in the array");
        }

        scanner.close();
    }
}