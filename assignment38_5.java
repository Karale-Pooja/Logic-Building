/*
write a java program which accept number from user and return 
differ bet summation of odd and even digits

i/p : 2395
o/p :-15
*/
import java.util.Scanner;
class digits
{
public int Countdiff(int iNo)
{
       int ieven = 0;
        int iodd = 0;
        while (iNo > 0) {
            int iDigit = iNo % 10;
            if (iDigit % 2 == 0) {
                ieven += iDigit;
            } else {
                iodd += iDigit;
            }
            iNo /= 10;
        }
        return ieven - iodd;
    }
}

class assignment38_5
{
    public static void main(String A[])
{
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter Number");
    int Num = scanner.nextInt();

    digits obj = new digits();
   int iRet=  obj.Countdiff(Num);

   System.out.println("Diff  of Digits:" + iRet);


}
}