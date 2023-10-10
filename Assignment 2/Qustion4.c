#include <stdio.h>
    void Dispay(int iNo,int iFrequency){
        int i =0;
        for(i=1;i<=iFrequency; i++){
            printf("%d",iNo);
        }
    }
int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter frequence");
    scanf("%d",&iCount);

    Dispay(iValue,iCount);
    return 0;
}
