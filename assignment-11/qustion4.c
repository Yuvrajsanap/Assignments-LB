#include <stdio.h>

int CountFour(int iNo){
    int iDigit=0;
    int iCounter=0;
    
    while(iNo>0){
        iDigit=iNo%10;
        if(iDigit==4){
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

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet=CountFour(iValue);
    printf("%d",iRet);

    return 0;
}