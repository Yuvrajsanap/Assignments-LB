import java.util.*;

class Number{
    public int Arr[];
    public int iRStart;
    public int iREnd;

    public Number(int x[],int a,int b){
        this.Arr=x;
        this.iRStart=a;
        this.iREnd=b;
    }

      public void Display()
      {
        int iCnt=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++){
            if(Arr[iCnt]>=iRStart && Arr[iCnt]<=iREnd){
                System.out.print(Arr[iCnt]+"\t");
            }
        }
      }
}
class qustion4{
    public static void main(String args[]){
        Scanner obj=new Scanner(System.in);
        int iSize=0;
        int iCnt=0;
        int iStart=0;
        int iEnd=0;
        
        System.out.println("Enter the number:");
        iSize=obj.nextInt();

        System.out.println("Enter starting Rang no:");
        iStart=obj.nextInt();

        System.out.println("Enter Ending Range no:");
        iEnd=obj.nextInt();

        int Arr[]=new int[iSize];
        System.out.println("Enter the element:");
        for(iCnt=0;iCnt<iSize;iCnt++){
            Arr[iCnt]=obj.nextInt();
        }

        Number nobj=new Number(Arr, iStart,iEnd);
        nobj.Display();

        obj.close();
    }
}