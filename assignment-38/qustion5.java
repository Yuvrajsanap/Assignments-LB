import java.util.*;

class qustion5
{
    public static int ToggleBit(int iNo)
    {
        int iMask=0x0000000f;
        int iResult=0;

        iResult= iMask | iNo;

        return iResult;
    }
    public static void main(String args[])
    {
        int iNo,iRet=0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number:");
        iNo=sobj.nextInt();

        iRet=ToggleBit(iNo);

        System.out.println("Modified number is: "+iRet);
    }
}