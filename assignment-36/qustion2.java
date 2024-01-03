import java.util.*;

class StringDemo{
    public String src;
    public String dest;

    public StringDemo(String x,String y){
        this.src=x;
        this.dest=y;
    }

    public boolean StrCmpX(){
        if(src.equals(dest)){
            return true;
        }
        else{
            return false;
        }
    }
}
class qustion2{
    public static void main(String args[]){
        Scanner obj=new Scanner(System.in);
        boolean bRet=false;

        System.out.println("Enter first string:");
        String sobj=obj.nextLine();

        System.out.println("Enter second strng:");
        String fobj=obj.nextLine();

        StringDemo cobj=new StringDemo(sobj, fobj);
        
        bRet=cobj.StrCmpX();
        if(bRet==true){
            System.out.println("TRUE");
        }
        else{
            System.out.println("FALSE");
        }



    }
}