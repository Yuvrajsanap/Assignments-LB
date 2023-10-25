#include <stdio.h>

int FactorialDiff(int iNo){
int iCnt=0;
int iFactEven=1;
int iFactOdd=1;

    if(iNo<0){
        iNo=-iNo;
    }
for(iCnt=1;iCnt<=iNo;iCnt++){
    if((iCnt%2)==0){
        iFactEven=iFactEven*iCnt;
    }
}

for(iCnt=1;iCnt<=iNo;iCnt++){
    if((iCnt%2)!=0){
        iFactOdd=iFactOdd*iCnt;
    }
}
return iFactEven-iFactOdd;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("Factorial differance is %d",iRet);
    return 0;
}