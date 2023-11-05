#include<stdio.h>
#include<stdlib.h>

int Differance(int Arr[],int iLength){
    int iCnt=0;
    int iEvenSum=0;
    int iOddSum=0;

  for ( iCnt = 0; iCnt < iLength; iCnt++)
  {
    if((Arr[iCnt]%2)==0){
        iEvenSum=iEvenSum+Arr[iCnt];
    }
    if((Arr[iCnt]%2)!=0){
        iOddSum=iOddSum+Arr[iCnt];
    }
  }
    return iEvenSum-iOddSum;
}
int main(){
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;

    printf("Enter number of element\n");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize * sizeof(int));

    if(p==NULL){
        printf("Unnable to allocate memory\n");
        return -1;
    }
    printf("Enter %d elements",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++){
        printf("Enter elements %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=Differance(p,iSize);
    printf("Result is %d",iRet);

    free(p);

    return 0;
}