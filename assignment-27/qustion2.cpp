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
    void struprx(){
       char *ptr=str;
        while(*ptr!='\0'){
            if(*ptr>='a' && *ptr<='z'){
                *ptr=*ptr-32;
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
    obj->struprx();

    delete obj;
    return 0;
}