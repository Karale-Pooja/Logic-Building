/*
write a java program which accept number from user and return 
count of odd digits.

i/p : 2225
o/p :3
*/
import java.util.Scanner;
class digits
{
public int CountOdd(int iNo)
{
    int iCount =0;
      int iDigit =0;
while(iNo > 0)
{
  iDigit = iNo % 10;

if(iDigit % 2 !=0)
{
    iCount++;
}
iNo /= 10;
}
return iCount;
}
}
class assignment38_2
{
    public static void main(String A[])
{
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter Number");
    int Num = scanner.nextInt();

    digits obj = new digits();
   int iRet=  obj.CountOdd(Num);

   System.out.println("Count of odd Digits:" + iRet);


}
}