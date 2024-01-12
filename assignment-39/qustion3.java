import java.util.*;

class qustion3
{
    public static int OnBit(int iNo,int iPos){
    int iMask=0x0000000a;
    int iResult=0;
    
    iMask=iMask<<(iPos-1);

        iResult=iMask | iNo;
        
        return iResult;
 }
    public static void main(String args[])
    {
        int iNo=0,iPos=0;
        int iRet=0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number: ");
        iNo=sobj.nextInt();

        System.out.println("Enter position:");
        iPos=sobj.nextInt();

        iRet=OnBit(iNo, iPos);

        System.out.println(iRet);

    }
}