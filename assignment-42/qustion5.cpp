#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

void Display(char FName[],int iSize)
{
    int fd=0;
    char Arr[50]={'\0'};
    int iRet=0;

    fd=open(FName,O_RDWR);

    if(fd==-1){
        cout<<"Unable to open file\n";
    }
    else
    {
        cout<<FName<<" open succesfully\n";

        iRet=read(fd,Arr,sizeof(Arr));
        cout<<Arr;
    }
}
int main()
{
    char FileName[30];
    int iValue=0;

    cout<<"Enter name of the file that you want to enter from cd:\n";
    cin>>("%s",FileName);

    cout<<"Enter number of character:\n";
    cin>>("%d",iValue);

    Display(FileName,iValue);

    return 0;
}