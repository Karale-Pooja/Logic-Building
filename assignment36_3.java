/*
write a java program which accept string from user and
return differance between frequency of  small characters
and frquency of capital charcters
i/p : MarvellouS
o/p : 6  (8-2)
*/
import java.util.Scanner;

class StringDemo
{
    public int CountDiff(String str)
    {
        int capitalCount = 0;
        int smallCount = 0;
for(char ch : str.toCharArray())
{
    if(Character.isUpperCase(ch))
    {
capitalCount++;
    }
    else if(Character.isLowerCase(ch))
    {
        smallCount++;
    }
}
return capitalCount - smallCount;
    }
}
class assignment36_3
{
    public static void main(String Arr[])
    {
Scanner scanner =  new Scanner(System.in);

System.out.println("Enter String");
String inP = scanner.nextLine();

StringDemo demo = new StringDemo();

int countdifferance = demo.CountDiff(inP);

System.out.println("Differance is " + countdifferance);

scanner.close();
    }
}