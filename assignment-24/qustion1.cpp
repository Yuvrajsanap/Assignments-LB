#include<iostream>
#include<stdbool.h>

using namespace std;

class Char{
    private:
    char ch;
    public:
    Char(int a){
        ch=a;
    }

    bool ChkAlpha()
    {
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
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

    bret=cobj->ChkAlpha();

    if(bret==true){
        cout<<"It is character:"<<endl;
    }
    else{
        cout<<"It's not character"<<endl;
    }

    

    return 0;
}