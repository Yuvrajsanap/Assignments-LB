#include<iostream>
using namespace std;
class String{
    private:
    char *str;
    int iSize;
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
    }
    void DisplayDigit(){
        while(*str!='\0'){
            if(*str>='0' && *str<='9'){
                cout<<*str;
            }
        str++;
        }
    }
};
int main()
{
    String *obj=new String();
    obj->Accept();
    obj->DisplayDigit();

    delete obj;
    return 0;
}