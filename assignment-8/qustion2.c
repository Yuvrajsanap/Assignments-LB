#include <stdio.h>

int DollarToINR(int iNo){
    int iInr=0;

    iInr=(iNo*70);

    return iInr;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=DollarToINR(iValue);

    printf("value in INR is%d\n",iRet);

    return 0;
}