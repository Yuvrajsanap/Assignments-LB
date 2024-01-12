import java.util.*;

class qustion2
{
    public static void CommonBits(int iNo1,int iNo2){
        int iMask=0x00000001;
        int iCount=0;

        for(int i=1;i<=32;i++){
        if((iNo1 & iMask)==iMask && (iNo2 &iMask)==iMask){
            System.out.println(i);
        }
        iMask=iMask<<1;
        }

    }
    public static void main(String args[])
    {
        int iNo1=0,iNo2=0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number");
        iNo1=sobj.nextInt();

        System.out.println("Enter number");
        iNo2=sobj.nextInt();

        CommonBits(iNo1, iNo2);

    }
}