#include<stdio.h>

void Pattern(int iRow,int iCol)
{

    int i=0,j=0;
    char ch='\0';

    for(i=1;i<=iRow;i++){
        for(j=1,ch='a';j<=iCol;j++,ch++){

            if((i%2) != 0){
                printf("%c\t",ch);
            }
            else{
                printf("%d\t",j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows and coulumn :\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}