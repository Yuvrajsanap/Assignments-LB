#include <stdio.h>

void TableRev(int iNo){

    int iCnt=0;
    for(iCnt=10;iCnt>=1;iCnt--){
        printf("%d\t",iCnt*iNo);
    }
}
int main()
{
    int iValue=0;

    printf("Enter number");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}