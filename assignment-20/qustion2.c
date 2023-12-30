#include<stdio.h>


void Pattern(int iRow,int iCol)
{
    int i=0,j=0;

    for(i=1;i<=iRow;i++){
        for(j=1;j<=iCol;j++){
            if((i%2) !=0){
                printf("%d\t",j*2);
            }
            else{
                printf("%d\t",(j*2)-1);
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1,iValue2=0;

    printf("Enter number of rows and colums\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}