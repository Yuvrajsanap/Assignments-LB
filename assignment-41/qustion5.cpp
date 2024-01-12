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
    char Arr[100]={'\0'};


    cout<<"Enter name of the file that you want to enter from cd\n";
    cin>>("%s",FileName);

    fd=open(FileName,O_WRONLY);

    if(fd==-1){
        cout<<"Unable to open file\n";
    }
    else{
        cout<<FileName<<"open succesfully with fd :"<<fd;

    cout<<"Enter data that you want to write at the end of file\n";
    cin>>("%[^\n]s",Arr);

        iRet=write(fd,Arr,strlen(Arr));
        cout<<iRet<<" byte written into file";

        close(fd);
    }
    return 0;
}