import java.util.*;

class qustion2
{
        public static boolean ChkBit(int iNo)
        {
            int iMask=0x00020010;
            int iResult=0;

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
        Scanner sobj=new Scanner(System.in);

        boolean bRet=false;
        int iNo;
        
        System.out.println("Enter number:");
        iNo=sobj.nextInt();

        bRet=ChkBit(iNo);
        
        if(bRet==true){
            System.out.println("Bit is ON");
        }
        else
        {
            System.out.println("Bit is OFF");
        }

    }
}