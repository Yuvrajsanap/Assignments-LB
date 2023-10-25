#include <stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3){
    int imul=0;

    if(iNo1==0 && iNo2==0){
        return iNo3;
    }
    if(iNo2==0 && iNo3==0){
        return iNo1;
    }
    if(iNo1==0 && iNo3==0){
        return iNo2;
    }

    if(iNo1==0 ){
        return iNo2*iNo3;
    }
    if(iNo2==0){
       return iNo1*iNo3;
    }
    if(iNo3==0){
       return iNo1*iNo2;
    }

    imul=iNo1*iNo2*iNo3;
    return imul;
}
int main()
{
    int iValue1=0, iValue2=0, iValue3=0, iRet=0;
    printf("please enter three number");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);

    printf("The multilplication is %d,%d,%d, is ,%d\n",iValue1,iValue2,iValue3,iRet);

    return 0;
}

