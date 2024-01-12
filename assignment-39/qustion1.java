import java.util.*;

class qustion1
{
    public static boolean ChkBit(int iNo,int iPos){
    int iMask=0x00000001;
    int iResult=0;
    
    iMask=iMask<<(iPos-1);

    iResult=iMask & iNo;

    if(iResult==iMask){
        return true;
    }
    else{
        return false;
    }
 }
    public static void main(String args[])
    {
        int iNo=0,iPos=1;
        boolean bRet=false;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number: ");
        iNo=sobj.nextInt();

        System.out.println("Enter position:");
        iPos=sobj.nextInt();

        bRet=ChkBit(iNo,iPos);

        System.out.println(bRet);

    }
}