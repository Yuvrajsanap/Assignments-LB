import java.util.*;

class StringDemo{
    public String str=null;

    public StringDemo(String x){
        this.str=x;
    }

    public int CountSmall(){
        char Arr[]=str.toCharArray();
        int iCnt=0;
        int iCount=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++){
            if(Arr[iCnt]>='a' && Arr[iCnt]<='z'){
                iCount++;
            }
        }
        return iCount++;
    }
}
class qustion2{
    public static void main(String args[]){
        Scanner obj=new Scanner(System.in);
        int iRet=0;
        System.out.println("Enter the string:");
        String sobj=obj.nextLine();

        StringDemo cobj=new StringDemo(sobj);

        iRet=cobj.CountSmall();
        System.out.println("Number of small element: "+iRet);
    }
}