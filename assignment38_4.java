/*
write a java program which accept number from user and return 
multiplication all digits

i/p : 222
o/p :8
*/
import java.util.Scanner;
class digits
{
public int Multiply(int iNo)
{
    int iCount =1;
      int iDigit =0;
while(iNo > 0)
{
  iDigit = iNo % 10;

if(iDigit > 0)
{
   iCount *= iDigit;
}
iNo /= 10;
}
return iCount;
}
}
class assignment38_4
{
    public static void main(String A[])
{
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter Number");
    int Num = scanner.nextInt();

    digits obj = new digits();
   int iRet=  obj.Multiply(Num);

   System.out.println("Mul  of Digits:" + iRet);


}
}