import java.util.*;

class StringDemo{
    public String str=null;

    public StringDemo(String x){
        this.str=x;
    }

    public int CountDiff(){
        int iCountCapital=0;
        int iCountSmall=0;
        int iCnt=0;
        char Arr[]=str.toCharArray();

        for(iCnt=0;iCnt<Arr.length;iCnt++){
            if(Arr[iCnt]>='A' && Arr[iCnt]<='Z'){
                iCountCapital++;
            }
            else if(Arr[iCnt]>='a' && Arr[iCnt]<='z'){
                iCountSmall++;
            }
        }
        return iCountSmall-iCountCapital;
    }
}

class qustion3{
    public static void main(String args[]){

        Scanner obj=new Scanner(System.in);
        int iRet=0;

        System.out.println("Enter string: ");
        String sobj=obj.nextLine();

        StringDemo cobj=new StringDemo(sobj);
        iRet=cobj.CountDiff();
        System.out.println("Differance are: "+iRet);
    }
}