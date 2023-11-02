#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo){
    while(iNo !=0){
        if(iNo%10==0){
            return TRUE;
        }
        iNo=iNo/10;
    }
    return FALSE;
}

int main()
{
    int iVAlue=0;
    BOOL bRet=FALSE;

    printf("Enter number");
    scanf("%d",&iVAlue);

    if(bRet==TRUE){
        printf("It contains zero");
    }
    else{
        printf("It contains no zero");
    }
    
    return 0;
}