#include<iostream>
using namespace std;

 class String
 {
    private:
    char *str;
    int iSize;
    public:
    String(){
        iSize=50;
        str=new char[iSize];
    }
    String(int x){
        int iSize=x;
        str=new char[iSize];
    }
    ~String(){
        delete []str;
    }
    void Accept(){
        cout<<"Enter string:\n";
        cin.getline(str,iSize);
    }
    int CountSmall(){
        int iCount=0;
        while(*str!='\0'){
            if(*str>='a' && *str<='z'){
                iCount++;
            }
            *str++;
        }
        return iCount;
    }
 };

int main(){
    int iRet=0;
    String *obj=new String();
    obj->Accept();
    iRet=obj->CountSmall();
    cout<<"count of small character are:"<<iRet;

   return 0;
}