#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int CountWhite(char FName[])
{
    int fd=0;
    char Arr[50]={'\0'};
    int iRet=0,iCount=0;

    fd=open(FName,O_RDWR);
    if(fd==-1){
        cout<<"Unable to open file\n";
    }else{
        cout<<FName<<"open succesfully.\n";
    while((iRet=read(fd,Arr,sizeof(Arr)))!=0)
    {
        for(int i=0;i<iRet;i++){
            if((Arr[i]==' '))
            {
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

    iret=CountWhite(FileName);
    cout<<"Number of white spaces are:"<<iret;
    return 0;
}