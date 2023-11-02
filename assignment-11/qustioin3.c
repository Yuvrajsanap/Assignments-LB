#include <stdio.h>

int CountTwo(int iNo){
    int iDigit=0;
    int iCounter=0;
    if(iNo<0){
        iNo=-iNo;
    }
    while(iNo>0){
        iDigit=iNo%10;
         if(iDigit==2){
            iCounter++;
        }
        iNo=iNo/10;
    }
    return iCounter;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet=CountTwo(iValue);
    printf("%d",iRet);

    return 0;
}