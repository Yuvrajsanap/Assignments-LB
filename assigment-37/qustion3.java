import java.util.Scanner;

public class qustion3 {
    
    public static boolean ChkBit(int iNo)
    {
        int iMask=0x00104040;
        int iResult=0;

        iResult=iNo & iMask;

        if(iResult==iMask){
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String args[])
    {
        boolean bRet=false;

        Scanner sobj=new Scanner(System.in);
        int iNo=0;

        System.out.println("Enter number: ");
        iNo=sobj.nextInt();

        bRet=ChkBit(iNo);

        
        if(bRet==true){
            System.out.println("7 & 15 & 21 bit are ON:");

        }
        else{
            System.out.println("7 & 15 & 21 bit are OFF:");
        }
    }
}
