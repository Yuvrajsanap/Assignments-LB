import java.util.*;

class qustion4
{
    public static boolean ChkBit(int iNo)
    {
        int iMask=0x000001c0;
        int iResult=0;

        iResult=iNo & iMask;

        if(iResult==iMask){
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String asgs[])
    {
        int iNo;
        boolean bRet=false;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number:");
        iNo=sobj.nextInt();

        bRet=ChkBit(iNo);

        if(bRet==true){
            System.out.println("7,8,9 Bit are ON");
        }
        else{
            System.out.println("7,8,9 Bit are OFF");
        }
    }
}