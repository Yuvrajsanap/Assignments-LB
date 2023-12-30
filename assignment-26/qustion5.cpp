#include<iostream>
using namespace std;

class String{
    private:
    int iSize;
    char *str;
    public:
    String(){
        iSize=100;
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
        cout<<"Enter string:\n";
        cin.getline(str,iSize);
    }
    void reverseString(){
        char Arr[iSize];
        int iCnt=0;
        while(*str!='\0'){
            Arr[iCnt]=*str;
            str++;
            iCnt++;
        }
        for(int i=iCnt-1; i>=0; i--){
            cout<<Arr[i];
        }
    }
};
int main(){
    int iRet=0;
    String *obj=new String();
    obj->Accept();
    obj->reverseString();
     return 0;
}