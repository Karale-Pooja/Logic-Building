/*
write a java program which accept string from user and check
whether it contains vowels in it or not

i/p : "pooja"
o/p : true

i/p : xyz
o/p : false
*/
import java.util.Scanner;

class StringDemo
{
    public boolean ChkVowel(String str)
    {
        String lowerCasestr = str.toLowerCase();
for(char ch : lowerCasestr.toCharArray())
{
    if(ch =='a'|| ch == 'e' || ch == 'i'|| ch == 'o'||
ch == 'u' )
{
    return true;
}
   }
 return false;
    }
}
class assignment36_4
{
    public static void main(String arr[])
    {
Scanner scanner1 = new Scanner(System.in);

System.out.print("Enter string");
String input1 = scanner1.nextLine();

StringDemo obj = new StringDemo();

boolean checked = obj.ChkVowel(input1);
System.out.println("String contains vowel"+ checked);

scanner1.close();
    }
}
