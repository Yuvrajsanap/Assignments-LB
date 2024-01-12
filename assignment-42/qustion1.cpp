#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

int CountCapital(char filen[])
{
    int fd=0;
    char Arr[50]={'\0'};
    int iRet=0,iCount=0;

    fd=open(filen,O_RDWR);

    if(fd==-1){
        cout<<"Unable to open file\n";
    }
    else{
        cout<<filen<<"open succesully with fd:\n"<<fd;

        while((iRet=read(fd,Arr,sizeof(Arr))) !=0)
        {
            for(int i=0;i<iRet;i++){
                if(Arr[i]>='A' && Arr[i]<='Z'){
                    iCount++;
                }
            }
        }
    }
    return iCount++;
}
int main()
{
    int fd=0;
    char FileName[30];
    int iret=0;
    

    cout<<"Enter name of the file that you want to enter from cd\n";
    cin>>("%s",FileName);

    iret=CountCapital(FileName);
    cout<<"number of capital later are:\n"<<iret;

    close(fd);

    return 0;
}