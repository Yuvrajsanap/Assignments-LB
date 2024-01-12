import java.util.*;

class qustion1
{
    public static int CountOne(int iNo)
    {
        int iCount=0;
        int iMask=0x00000001;
    
        for(int i=1;i<=32;i++){
            if((iMask&iNo)==iMask){
                iCount++;
            }
            iMask=iMask<< 1;
        }
return iCount;

    }
    public static void main(String args[])
    {
        int iNo=0,iret=0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("ENter number:");
        iNo=sobj.nextInt();

            iret=CountOne(iNo);

            System.out.println(iret);

    }
}