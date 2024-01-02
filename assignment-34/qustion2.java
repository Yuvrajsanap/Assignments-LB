import java.util.*;

class Digit{
    public int iNo=0;
    public Digit(int x){
        iNo=x;
    }

    public int CountOdd(){
        int iDigit=0;
        int iCount=0;
        if(iNo<0){
            iNo=-iNo;
        }

        while(iNo!=0){
            iDigit=iNo%10;
            if(iDigit%2!=0){
                iCount++;
            }
            iNo=iNo/10;
        }
        return iCount;
    }
}
class qustion2{
    public static void main(String args[]) {
        Scanner obj=new Scanner(System.in);
        int iRet=0;

        System.out.println("Enter a number:");
        int iNo=obj.nextInt();

        Digit dobj=new Digit(iNo);
        iRet=dobj.CountOdd();
        System.out.println("Count of Odd Digit is: "+iRet);
    }
}