import java.util.*;

class qustion4
{
    public static int ToggleBit(int iNo,int iPos){
    int iMask=0x00000001;
    int iResult=0;
    
    iMask=iMask<<(iPos-1);

        iResult=iMask ^ iNo;
        
        return iResult;
        
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

        iRet=ToggleBit(iNo, iPos);

        System.out.println(iRet);

    }
}