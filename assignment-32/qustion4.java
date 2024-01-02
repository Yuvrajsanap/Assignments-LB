import java.util.*;

class StringDemo{
    public String str=null;

    public StringDemo(String x){
        this.str=x;
    }

    public boolean ChkVowel(){
        int iCnt=0;
        char Arr[]=str.toCharArray();
        boolean bFlag=false;
        for(iCnt=0;iCnt<Arr.length;iCnt++){
            if(Arr[iCnt]=='a' || Arr[iCnt]=='e' || Arr[iCnt]=='i' || Arr[iCnt]=='o' || Arr[iCnt]=='u' || Arr[iCnt]=='A'|| Arr[iCnt]=='E'|| Arr[iCnt]=='I'||Arr[iCnt]=='O' || Arr[iCnt]=='U' ){
                bFlag=true;
                break;
            }
        }
        return bFlag;
    }
}
class qustion4{
    public static void main(String arsg[]){

        Scanner obj=new Scanner(System.in);
        boolean bRet=false;

        System.out.println("Enter String: ");
        String sobj=obj.nextLine();

        StringDemo cobj=new StringDemo(sobj);

        bRet=cobj.ChkVowel();

        if(bRet==true){
        System.out.println("TRUE");
        }
        else{
            System.out.println("FALSE");
        }
    }
}