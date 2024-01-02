import java.util.*;

class Number{
    public int Arr[];

    public Number(int x[]){
        this.Arr=x;
    
    }

      public int Display()
      {
        int iCnt=0;
        int iProd=1;
        for(iCnt=0;iCnt<Arr.length;iCnt++){
           if(Arr[iCnt]%2!=0){
            iProd = iProd * Arr[iCnt];
           }
        }
        return iProd;
      }
}
class qustion5{
    public static void main(String args[]){
        Scanner obj=new Scanner(System.in);
        int iSize=0;
        int iCnt=0;
        int iRet=0;
        
        System.out.println("Enter the number:");
        iSize=obj.nextInt();

        int Arr[]=new int[iSize];
        System.out.println("Enter the element:");
        for(iCnt=0;iCnt<iSize;iCnt++){
            Arr[iCnt]=obj.nextInt();
        }

        Number nobj=new Number(Arr);
        iRet=nobj.Display();
        System.out.println("Product of all Odd number are:"+iRet);

        obj.close();
    }
}