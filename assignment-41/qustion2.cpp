#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int main()
{
    int fd=0;
    char FileName[30];

    cout<<"Enter file name that you want to create :\n";
    cin>>("%s",FileName);

    fd=creat(FileName,0777);

    if(fd == -1){
        cout<<"Unable to open file";
    }
    else{
        cout<<"File create sucessfully.";
    }
    return 0;
}