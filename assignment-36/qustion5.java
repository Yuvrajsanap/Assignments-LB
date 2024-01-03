import java.util.*;

class StringDemo{
    public String str;
    public StringDemo(String x){
        this.str=x;
    }

    public boolean StrPallindrome(){
        String lowercase=str.toLowerCase();
        int iCnt=0;
        for(iCnt=0;iCnt<(lowercase.length())/2;iCnt++){
            if(lowercase.charAt(iCnt)!=lowercase.charAt((lowercase.length())-iCnt-1)){
                return false;
            }
        }
        return true;
    }
}

class qustion5{
    public static void main(String args[]){
        Scanner obj=new Scanner(System.in);
        boolean bret=false;
        System.out.println("Enter string:");
        String sobj=obj.nextLine();

        StringDemo cobj=new StringDemo(sobj);

        bret=cobj.StrPallindrome();
        if(bret==true){
            System.out.println("TRUE");
        }
        else{
            System.out.println("FALSE");
        }
    }
}