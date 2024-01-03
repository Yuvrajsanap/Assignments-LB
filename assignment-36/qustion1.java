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

    public String StrCatX()
    {
        if(iNo>=dest.length()){
            return src.concat(dest);
        }
        else
        {
            return src.concat(dest.substring(0, iNo));
        }
    }

}
class qustion1{
    public static void main(String args[]){
        Scanner obj=new Scanner(System.in);
        String sRet=null;

        System.out.println("Enter first string: ");
        String sobj=obj.nextLine();

        System.out.println("Enter second string: ");
        String fobj=obj.nextLine();

        System.out.println("Enter number: ");
        int nobj=obj.nextInt();

        StringDemo cobj=new StringDemo(sobj, fobj, nobj);
        sRet=cobj.StrCatX();
        System.out.println("String is: "+sRet);

    }
}