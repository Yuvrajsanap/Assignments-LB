#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int CountChar(char FName[],char Ch)
{
    int fd=0;
    char Arr[50]={'\0'};
    int iRet=0,iCount=0;

    fd=open(FName,O_RDWR);

    if(fd==-1){
        cout<<"Unable to open file";
    }
    else{
        cout<<FName<<" open succesfully.\n";

        while((iRet=read(fd,Arr,sizeof(Arr)))!=0){
            for(int i=0;i<iRet;i++)
            {
                if(Arr[i]==Ch){
                    iCount++;
                }
            }
        }
    }
return iCount;
}
int main()
{
    char FileName[30];
    char chN='\0';
    int iret=0;

    cout<<"Enter name of file that you want to open from cd:\n";
    cin>>("%s",FileName);

    cout<<"Enter name of the character\n";
    cin>>("%s",chN);

    iret=CountChar(FileName,chN);

    cout<<"number of occurances of that charcter: "<<iret;

    return 0;
}