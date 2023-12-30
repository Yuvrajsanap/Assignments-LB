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

    bool ChkCapital()
    {
        if(ch>='A' && ch<='Z'){
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

   bret= cobj->ChkCapital();

   if(bret==true){
    cout<<"It is capital"<<endl;
   }
   else{
    cout<<"it is not a capital";
   }


    return 0;
}