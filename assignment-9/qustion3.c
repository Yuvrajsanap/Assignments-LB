#include <stdio.h>

int KMtoMeter(int iNo){
    int iCnt=0;

     iCnt=iNo*1000;

    return iCnt;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter distance");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);

    printf("the distance is : %d",iRet);

    return 0;
}