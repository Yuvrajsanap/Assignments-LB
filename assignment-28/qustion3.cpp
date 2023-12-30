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
    int FirstChracter(){
        int Firstindex=0;
        while(*str!='\0'){
            if(*str==ch){
               return Firstindex;
            }
            Firstindex++;
            str++;
        }
        return -1;
    }
};
int main()
{
    int iRet=0;
    String *obj=new String();
    obj->Accept();
    iRet=obj->FirstChracter();

    cout<<iRet<<endl;

    delete obj;
    return 0;
}