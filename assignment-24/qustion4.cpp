#include<iostream>
#include<stdbool.h>

using namespace std;


class Char{
    public:
    char ch;
    public:
    Char(int x){
        ch=x;
    }

    bool ChkSmall(){
        if(ch>='a' && ch<='z'){
            return true;
        }
        return false;
    }
};
int main()
{
    char cValue='\0';
    bool bret=false;

    cout<<"Enter the character"<<endl;
    cin>>cValue;

    Char *cobj=new Char(cValue);

   bret= cobj->ChkSmall();

   if(bret==true){
    cout<<"It is Small case character"<<endl;
   }
   else{
    cout<<"it is not a Small case character";
   }


    return 0;
}