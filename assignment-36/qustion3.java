import java.util.*;

class StringDemo{
    public String src;
    public String dest;
    public int iNo;

    public StringDemo(String x,String y,int no){
        this.src=x;
        this.dest=y;
        this.iNo=no;
    }

    public boolean StrNCmpX()
    {
        if(iNo>=dest.length() ){
           System.out.println(src.concat(dest));
           return true;
        }
        else if(src.subSequence(0, iNo).equals(dest.subSequence(0, iNo))){
            return true;
        }
        else{
            return false;
        }
    }
}
class qustion3{
    public static void main(String args[]){
        Scanner obj=new Scanner(System.in);
        boolean bRet=false;

        System.out.println("Enter first string:");
        String sobj=obj.nextLine();

        System.out.println("Enter second strng:");
        String fobj=obj.nextLine();

        System.out.println("Enter number:");
        int nobj=obj.nextInt();

        StringDemo cobj=new StringDemo(sobj, fobj,nobj);
        
        bRet=cobj.StrNCmpX();
        if(bRet==true){
            System.out.println("TRUE");
        }
        else{
            System.out.println("FALSE");
        }



    }
}

