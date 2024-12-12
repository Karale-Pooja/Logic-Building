/*
write a java program which accept string from user and
count number of small characters
i/p : MArvelloUS
o/p : 6
*/
import java.util.Scanner;


class StringDemo
{
public int CountSmall(String input)
{
int countsmall = 0;

for(char ch : input.toCharArray())
{
    if(Character.isLowerCase(ch))
    {
        countsmall++;
    }
}
return countsmall;
}
}

class assignment36_2
{
    public static void main(String Arr[])
    {
Scanner scanner = new Scanner(System.in);


System.out.print("Enter the String");
String input = scanner.nextLine();

StringDemo obj = new StringDemo();

int scount = obj.CountSmall(input);

System.out.println("No of small chara" + scount);

scanner.close();



    }
}