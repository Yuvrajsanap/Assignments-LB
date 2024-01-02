import java.util.*;

class StringDemo{
    public String str=null;

    public StringDemo(String x){
        this.str=x;
    }

    public void Reverse(){
     int iCnt=0;
     char Arr[]=str.toCharArray();

     for(iCnt=Arr.length-1;iCnt>=0;iCnt--){
        System.out.print(Arr[iCnt]);
     }
}
}
class qustion5{
    public static void main(String arsg[]){
        
        Scanner obj=new Scanner(System.in);
        
        System.out.println("Enter String: ");
        String sobj=obj.nextLine();

        StringDemo cobj=new StringDemo(sobj);

        cobj.Reverse();

        // cobj.close();
       
}
}