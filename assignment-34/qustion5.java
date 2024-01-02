import java.util.*;

class Digit{
    public int iNo=0;
    public Digit(int x){
        iNo=x;
    }

  public int CountDiff(){
    int ievensum=0;
    int iOddsum=0;
    int iDigit=0;

    if(iNo<0){
        iNo=-iNo;
    }

    while(iNo!=0){
        iDigit=iNo%10;
        if((iDigit%2)==0){
            ievensum=ievensum+iDigit;
        }
        else if((iDigit%2)!=0){
            iOddsum=iOddsum+iDigit;
        }
        iNo=iNo/10;
    }
    return ievensum-iOddsum;
  }
}
class qustion5{
    public static void main(String args[]){
        Scanner obj=new Scanner(System.in);
        int iRet=0;
        System.out.println("Enter number:");
        int iValue=obj.nextInt();

        Digit dobj=new Digit(iValue);
        iRet=dobj.CountDiff();
        System.out.println("Range is: "+iRet);
    }
}