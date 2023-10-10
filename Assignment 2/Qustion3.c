#include <stdio.h>
void Dispay(int iNo){
    if(iNo < 10){
        printf("Hello");
    }
    else{
        printf("Demo");
    }
}
int main()
{
    int iVlaue=0;

    printf("Enter number");
    scanf("%d",&iVlaue);

    Dispay(iVlaue);
    return 0;
}