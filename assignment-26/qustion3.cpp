#include<iostream>
using namespace std;

class String{
    private:
    char *str;
    int iSize=0;
    public:
    String(){
        iSize=50;
        str=new char[iSize];
    }
    String(int x){
        iSize=x;
       str=new char[iSize];
    }
    ~String(){
        delete []str;
    }
    void Accept(){
        cout<<"Enter string\n";
        cin.getline(str,iSize);
    }
    int CountCapital(){
        int iCount=0;
        while(*str!='\0'){
            if(*str>='A' && *str<='Z'){
                iCount++;
            }
            *str++;
        }
       return iCount;
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
    int Diffrence(){
        int iCountCapital=0;
        int iCountSmall=0;

        while(*str!='\0'){
            if(*str>='a' && *str<='z'){
                iCountSmall++;
            }
            else if(*str>='A' && *str<='Z'){
                iCountCapital++;
            }
            *str++;
        }
        return iCountSmall-iCountCapital;
    }

};
int main()
{
    int iRet=0;
    String *obj=new String();
    obj->Accept();
    iRet=obj->Diffrence();
    cout<<"Diffrence are:\n"<<iRet;

    return 0;
}