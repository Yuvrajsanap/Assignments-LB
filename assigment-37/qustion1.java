import java.util.*;

class qustion1
{
    public static boolean ChkBit(int iNo)
    {
        int iResult=0;
        int iMask=0x00004000;

        iResult=iNo & iMask;

        if(iResult==iMask){
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String args[])
    {
        Scanner obj=new Scanner(System.in);

        int iNo=0;
        boolean bRet=false;

        System.out.println("Enter number: ");
        iNo=obj.nextInt();

        bRet=ChkBit(iNo);

        if(bRet==true)
        {
            System.out.println("15 bit is ON");
        }else{
            System.out.println("15 bit is OFF");
        }
    }

}