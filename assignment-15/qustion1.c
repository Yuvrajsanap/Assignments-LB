#include <stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

  BOOL Check(int Arr[],int iLength,int iNo){
    int iCnt=0;
    BOOL bFlag=FALSE;

    for(iCnt=0;iCnt<iLength;iCnt++){
        if(iCnt==iNo){
            bFlag=TRUE;
            break;
        }
    }
    return bFlag;
}

int main()
{
   int iSize=0,iRet=0,iCnt=0,iValue=0;
   int *p=NULL;
   BOOL bRet=FALSE;

   printf("Enter number of element");
   scanf("%d",&iSize);

   printf("Enter the number");
   scanf("%d",&iValue);

    p=(int *)malloc(iSize *sizeof(int));

   if(p==NULL){
    printf("Unable to allocate memory");
    return -1;
   }

   for(iCnt=0;iCnt<iSize;iCnt++){
    printf("Enter element : %d",iCnt+1);
    scanf("%d",&p[iCnt]);
   }

   bRet=Check(p,iSize,iValue);

   if(bRet==TRUE){
    printf("Number is present");
   }else{
    printf("Number is not present");
   }
   free(p); 

    return 0;
}