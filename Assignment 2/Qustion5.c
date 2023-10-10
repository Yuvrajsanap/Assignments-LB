#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL chkEven(int iNo){
    if((iNo % 2)==0){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main(){
int iValue=0;
BOOL bRet=FALSE;

printf("Enter number");
scanf("%d",&iValue);

bRet=chkEven(iValue);

if(bRet==TRUE){
    printf("the number is even\n");
}
else{
    printf("the number is odd\n");
}
    return 0;
}