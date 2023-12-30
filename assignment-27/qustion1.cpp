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
    void strlwrx(){
        char *ptr=str;
        while(*ptr!='\0'){
            if(*ptr>='A' && *ptr<='Z'){
                *ptr=*ptr+32;
            }
            *ptr++;
        }
        cout<<str;
    }
};
int main()
{
    String *obj=new String();
    obj->Accept();
    obj->strlwrx();

    delete obj;
    return 0;
}