import java.util.*;

class qustion2
{
    public static int OffBit(int iNo,int iPos){
    int iMask=0x00000001;
    int iResult=0;
    
    iMask=iMask<<(iPos-1);

        iResult=iMask & iNo;
        
    if(iResult==iMask){
        return (iMask ^ iNo);
    }
    else{
       return iNo;
    }
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

        iRet=OffBit(iNo, iPos);

        System.out.println(iRet);

    }
}