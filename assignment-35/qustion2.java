import java.util.*;

class Number{
    public int Arr[];
    public int iNo;

    public Number(int x[],int No){
        this.Arr=x;
        this.iNo=No;
    }

    public int FirstOcc() {
        int iCnt = 0;
        int iPos = 1;

        for (iCnt = 0; iCnt < Arr.length; iCnt++) {
            if (Arr[iCnt] == iNo) {
                break;
            }
            iPos++;
        }
        return iPos;
    }
}
class qustion2{
    public static void main(String args[]){
        Scanner obj=new Scanner(System.in);
        int iSize=0;
        int iCnt=0;
        int Cheak=0;
        int iret=0;
        System.out.println("Enter the number:");
        iSize=obj.nextInt();

        System.out.println("Enter number that you want to check:");
        Cheak=obj.nextInt();

        int Arr[]=new int[iSize];
        System.out.println("Enter the element:");
        for(iCnt=0;iCnt<iSize;iCnt++){
            Arr[iCnt]=obj.nextInt();
        }

        Number nobj=new Number(Arr, Cheak);
        iret=nobj.FirstOcc();
        System.out.println(iret);

        obj.close();
    }
}