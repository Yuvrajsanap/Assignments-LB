#include<stdio.h>

int EvenFactorial(int iNo){
    if(iNo<0){
        iNo=-iNo;
    }
    int iCnt=0;
    int iFacto=1;
    for(iCnt=1;iCnt<=iNo;iCnt++){
        if((iCnt%2)!=0){
            iFacto=iFacto*iCnt;
        }
    }

    return iFacto;
}

int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return 0;
}
