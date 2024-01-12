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

    cout<<"Enter name of the file that you want to read from curent directury:\n";
    cin>>("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd ==-1){
        cout<<"unable to open file";
    }
    else{
        cout<<FileName<<"File open Succefully\n";
        iRet=read(fd,Arr,20);
        cout<<"Data from file is\n"<<Arr;
    }

    return 0;
}