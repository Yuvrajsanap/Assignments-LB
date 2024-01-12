import java.util.*;

class qustion5
{
    public static int ToggleBit(int iNo)
    {
        int iMask=0x00000009;
        int iResult=0;

        iResult=iMask ^ iNo;

        return iResult;
    }
    public static void main(String args[])
    {
        int iNo=0,iRet=0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number:");
        iNo=sobj.nextInt();

        iRet=ToggleBit(iNo);

        System.out.println((iRet));
    }
}