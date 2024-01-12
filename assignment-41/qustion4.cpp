#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int main()
{
    int fd=0;
    char FileName[30];
    int iRet=0;
    char Arr[50]={'\0'};

    cout<<"Enter file name that you want to enter from cd:\n";
    cin>>("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd==-1){
        cout<<"Unable to open file\n";
    }
    else{
        cout<<FileName<<"open succesfully with the fd :"<<fd;
        iRet=read(fd,Arr,20);
        cout<<"\nSize of the File "<<iRet<<" Byte";

        close(fd);

    }

    return 0;
}