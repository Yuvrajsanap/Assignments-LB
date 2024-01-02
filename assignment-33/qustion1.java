import java.util.*;

class ArrayDemo{
    public int Arr[];

    public ArrayDemo(int x[]){
        this.Arr=x;
    }
    public int Diffrence(){
        int iCnt=0;
        int iEvenSum=0;
        int iOddSum=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++){
            if((iCnt%2)==0){
                iEvenSum=iEvenSum+Arr[iCnt];
            }
            else if((iCnt%2)!=0){
                iOddSum=iOddSum+Arr[iCnt];
            }
        }
        return iOddSum-iEvenSum;
    }
}
class qustion1{
    public static void main(String args[]){
        Scanner obj=new Scanner(System.in);
        int iCnt=0;
        int iSize=0;
        int iRet=0;
        System.out.println("Enter number of element:");
        iSize=obj.nextInt();
        
        int Arr[]=new int[iSize];
        System.out.println("Enter element:");
        for(iCnt=0;iCnt<Arr.length;iCnt++){
            Arr[iCnt]=obj.nextInt();
        }

        ArrayDemo aobj=new ArrayDemo(Arr);
        iRet=aobj.Diffrence();
        System.out.println(iRet);


        
    }

}