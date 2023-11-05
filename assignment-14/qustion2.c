#include <stdio.h>

int Frequency(int Arr[],int iLength){
    int iCnt=0;
    int iEven=0;
    int iOdd=0;

    for(iCnt=0;iCnt<iLength;iCnt++){
        if((Arr[iCnt]%2)==0){
            iEven++;
        }
        if((Arr[iCnt]%2)!=0){
            iOdd++;
        }
    }
    return iEven-iOdd;
}
int main()
{
     int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;

    printf("Enter number of element");
    scanf("%d",&iSize);

   p= (int *)malloc(iSize*(sizeof(int)));

    if(p==NULL){
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d element\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++){
        printf("Enter element %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet=Frequency(p,iSize);
    printf("Result is %d\n",iRet);

    free(p);

    return 0;
}