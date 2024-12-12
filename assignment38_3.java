/*
write a java program which accept number from user and return 
count of  digits in between 3 and 7.

i/p : 2225
o/p :1
*/
import java.util.Scanner;
class digits
{
public int CountRange(int iNo)
{
    int iCount =0;
      int iDigit =0;
while(iNo > 0)
{
  iDigit = iNo % 10;

if(iDigit > 3 && iDigit < 7)
{
    iCount++;
}
iNo /= 10;
}
return iCount;
}
}
class assignment38_3
{
    public static void main(String A[])
{
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter Number");
    int Num = scanner.nextInt();

    digits obj = new digits();
   int iRet=  obj.CountRange(Num);

   System.out.println("Count of Digits:" + iRet);


}
}