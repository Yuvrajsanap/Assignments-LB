import java.util.*;

class qustion5
{
    public static boolean ChkBit(int iNo)
    {
        int iMask=0x80000001;
        int iResult=0;

        iResult=iNo & iMask;

        if(iResult==iMask){
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String asgs[]) throws Exception
    {
        int iNo=0;
        boolean bRet=false;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number:");
        iNo=sobj.nextInt();

        bRet=ChkBit(iNo);

        if(bRet==true){
            System.out.println("First and Last Bit are ON");
        }
        else{
            System.out.println("First and Last Bit are OFF");
        }
    }
}