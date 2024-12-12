/*
write a java program which accept string from user and display 
it in reverse order.

i/p : "pooja"
o/p : ajoop
*/
import java.util.Scanner;

class StringDemo
{
    public String Reverse(String str)
{
    StringBuilder reversed = new StringBuilder();
    for(int i = str.length()-1; i >= 0; i--)
    {
reversed.append(str.charAt(i));
    }
     
        return reversed.toString();
}
}

class assignment36_5
{
    public static void main(String Arr[])
    {
        Scanner scanner1 = new Scanner(System.in);

        System.out.print("Enter string ");
         String input1 = scanner1.nextLine();

         StringDemo obj = new StringDemo();
         String reverString = obj.Reverse(input1);

         System.out.println("Reverse is " + reverString);


         scanner1.close();


    }
}