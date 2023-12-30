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
        cout<<"Enter the string:\n";
        cin.getline(str,iSize);
    }
    bool ChkVowel(){
        while(*str!='\0'){
            if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' ||*str=='A' ||*str=='E' ||*str=='I' ||*str=='O' || *str=='U'){
                return true;
            }
            *str++;
        }
        return false;
    }
};
int main()
{
    bool bRet=0;
    String *obj=new String();
    obj->Accept();
    bRet=obj->ChkVowel();
    
    if(bRet==true){
        cout<<"Contains vowels:\n";
    }
    else{
        cout<<"there is no vowels:\n";
    }
    return 0;
}