#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[],int iLength){
    int iCnt=0;
    BOOL bFlag=FALSE;

    for(iCnt=0;iCnt<iLength;iCnt++){
        if(Arr[iCnt]==11){
            bFlag=TRUE;
            break;
        }

    }
    return bFlag;
}
int main()
{
    int iSize,iRet=0,iCnt=0;
    int *p=NULL;
    BOOL bRet=FALSE;

    printf("Enter numberof element");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*(sizeof(int)));

    if(p==NULL){
        printf("Unable to allow memory");
        return -1;
    }
    printf("Enter %d element :",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++){
        printf("Enter element %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet=Check(p,iSize);

    if(bRet==TRUE){
        printf("11 is present");
    }
    free(p);

    return 0;
}