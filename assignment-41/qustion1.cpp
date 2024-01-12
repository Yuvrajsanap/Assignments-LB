#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
using namespace std;

int main()
{
    int fd=0;
    char FileName[30];

    cout<<"Enter file name that you want to enter\n";
    cin>>("%s",FileName);

    fd=open(FileName,O_RDONLY);

    if(fd== -1){
        cout<<"Unable to open file";
    }
    else{
        cout<<FileName<<" open succesfully with fd :"<<fd;
        close(fd);
    }
    
    return 0;
}