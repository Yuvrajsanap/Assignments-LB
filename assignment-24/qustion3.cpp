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

    bool ChkDigit(){
        if(ch>='0' && ch<='9'){
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

   bret= cobj->ChkDigit();

   if(bret==true){
    cout<<"It is digit"<<endl;
   }
   else{
    cout<<"it is not a digit";
   }


    return 0;
}