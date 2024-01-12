#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int CountSmall(char FName[])
{
    int fd=0;
    char Arr[50]={'\0'};
    int iRet=0,iCount=0;

    fd=open(FName,O_RDONLY);

    if(fd==-1){
        cout<<"Unable to open file\n";
    }
    else{
        while((iRet=read(fd,Arr,30))!=0){
        for(int i=0;i<iRet;i++){
            if(Arr[i]>='a' && Arr[i]<='z'){
                iCount++;
            }
        }
    }
    }
    return iCount;
}
int main()
{
    int fd=0;
    char FileName[30];
    int iret=0;

    cout<<"Enter file name that you want to enter from cd\n";
    cin>>("%s",FileName);

    iret=CountSmall(FileName);
    cout<<"Small character are:"<<iret;
    return 0;
}