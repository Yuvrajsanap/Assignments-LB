import java.util.*;

class Digit{
    public int iNo=0;
    public Digit(int x){
        iNo=x;
    }

    public int Multiply(){
        int iDigit=1;
        int iMul=iDigit;

        while(iNo!=0){
            iDigit=iNo%10;
            if(iDigit==0){
                iDigit=1;
            }
            iMul=iDigit*iMul;
            iNo=iNo/10;
        }
        return iMul;
    }
}
class qustion4{
    public static void main(String args[]){
        Scanner obj=new Scanner(System.in);
        int iRet=0;
        System.out.println("Enter number:");
        int iValue=obj.nextInt();

        Digit dobj=new Digit(iValue);
        iRet=dobj.Multiply();
        System.out.println("Range is: "+iRet);
    }
}