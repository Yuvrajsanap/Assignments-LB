import java.util.*;

class qustion2
{
    public static int OffBit(int iNo)
    {
        int iMask=0x00000240;
        int iResult=0;

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
        Scanner sobj=new Scanner(System.in);

        int iNo=0;
        int iRet=0;

        System.out.println("Enter number:");
        iNo=sobj.nextInt();

        iRet=OffBit(iNo);

        System.out.println("modified number are:"+iRet);
    }
}