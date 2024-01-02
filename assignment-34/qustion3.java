import java.util.*;

class Digit{
    public int iNo=0;
    public Digit(int x){
        iNo=x;
    }

    public int CountRange(){
        int iDigit=0;
        int iCount=0;

        while(iNo!=0){
            iDigit=iNo%10;
            if(iDigit>=3 && iDigit<=7){
                iCount++;
            }
            iNo=iNo/10;
        }
        return iCount;
    }
}
class qustion3{
    public static void main(String args[]){
        Scanner obj=new Scanner(System.in);
        int iRet=0;
        System.out.println("Enter number:");
        int iValue=obj.nextInt();

        Digit dobj=new Digit(iValue);
        iRet=dobj.CountRange();
        System.out.println("Range is: "+iRet);
    }
}