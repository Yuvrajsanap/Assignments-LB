#include<iostream>
using namespace std;
class String{
    private:
    char *str;
    int iSize;
    char ch;
    public:
    String(){
        iSize=100;
        str=new char[iSize];
    }
    String(int x){
        iSize=x;
    }
    ~String(){
        delete []str;
    }
    void Accept(){
        cout<<"Enter string:\n";
        cin.getline(str,iSize);
        cout<<"Enter character:\n";
        cin>>ch;
    }
   bool ChkChar(){
    
    while(*str!='\0'){
        if(*str==ch){
            return true;
        }
        str++;
    }
    return false;
   }
};
int main()
{   
    bool bret=false;
    String *obj=new String();
    obj->Accept();
    bret=obj->ChkChar();

    if(bret==true){
        cout<<"True:\n";
    }
    else{
        cout<<"False\n";
    }

    delete obj;
    return 0;
}