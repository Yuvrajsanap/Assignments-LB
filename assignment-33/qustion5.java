import java.util.*;

class ArrayDemo{
    public int Arr[];
    public ArrayDemo(int x[]){
        this.Arr=x;
    }

    public void Differance(){
        int iCnt=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++){
           if(Arr[iCnt]%11==0){
            System.out.print(Arr[iCnt]+"\t");
           }
        }
    }
}
class qustion5{
    public static void main(String args[]){
        Scanner obj=new Scanner(System.in);
        int iSize=0;
        int iCnt=0;

        System.out.println("Enter number of element:");
        iSize=obj.nextInt();

        int Arr[]=new int[iSize];
        System.out.println("Enter element:");
        for(iCnt=0;iCnt<Arr.length;iCnt++){
            Arr[iCnt]=obj.nextInt();
        }

        ArrayDemo aobj=new ArrayDemo(Arr);
        aobj.Differance();

        obj.close();

    }
}