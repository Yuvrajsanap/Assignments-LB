import java.util.*;

class StringDemo{
    public String src;
    public StringDemo(String x){
        this.src=x;
    }

    public void StrRevTogX(){
        int iCnt=0;
        
        char Arr[]=src.toCharArray();

        for(iCnt=src.length()-1;iCnt>=1;iCnt--){
            if(Arr[iCnt]>='A' && Arr[iCnt]<='Z'){
                Arr[iCnt]=(char) (Arr[iCnt]+32);
                System.out.print(Arr[iCnt]);
            }
            else if(Arr[iCnt]>='a' && Arr[iCnt]<='z'){
                Arr[iCnt]=(char) (Arr[iCnt]-32);
                 System.out.print(Arr[iCnt]);

            }
        }
    }
}
class qustion4{
    public static void main(String args[]){
        Scanner obj=new Scanner(System.in);

        System.out.println("Enter string:");
        String sobj=obj.nextLine();

        StringDemo cobj=new StringDemo(sobj);
        cobj.StrRevTogX();
    }
}