#include<stdio.h>

double SquareMeter(int iNo){
    double dsq=0;

    dsq=iNo*0.0929;

    return dsq;
}

int main(){
    int iValue=0;
    double dRet=0.0;

    printf("Enter Area in Square feet:\n");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);

    printf("%d squareFeet : %f SquareMeter",iValue,dRet);

    return 0;
}