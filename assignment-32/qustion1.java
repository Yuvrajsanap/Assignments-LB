import java.util.*;

class StringDemo{ 

    public String str=null;

   public StringDemo(String x){
        this.str=x;
    }

    public int CountCapital(){ 
        char Arr[]=str.toCharArray();
        int iCnt=0;
        int iCount=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++){
            if(Arr[iCnt]>='A' && Arr[iCnt]<='Z'){
                iCount++;
            }
        }
        return iCount;
        
    }
}


class qustion1{

    public static void main(String args[])
    {
        Scanner obj=new Scanner(System.in);
        int iRet=0;

        System.out.println("Enter string:");
        String fobj=obj.nextLine();

        StringDemo sobj=new StringDemo(fobj);

        iRet=sobj.CountCapital();
        System.out.println(iRet);

    }

}