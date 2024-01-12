import java.util.*;

class qustion1
{
    public static int OffBit(int iNo)
    {
        int iMask=0x00000040;
        int iResult=0;

        iResult=iMask & iNo;

        if(iResult==iMask)
        {
            return (iMask^iNo);
        }
        else{
            return iNo;
        }
    }
    public static void main(String args[])
    {
        int iNo=0;
        int iRet=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number");
        iNo=sobj.nextInt();

        iRet=OffBit(iNo);

        // if(iRet==iNo){
        //     System.out.println("7 bit is OFF"+iRet);
        // }
        // else{
        //     System.out.println("7 bit is ON");
        // }
        System.out.println("7 bit is :"+iRet);
    }
}