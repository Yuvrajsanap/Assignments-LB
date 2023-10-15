#include <stdio.h>

void printEven(int iNo){
    int iCnt=0;
    if(iNo <= 0){
        return;
    }
   for(iCnt=1;iCnt<=(iNo*2);iCnt++){
    if((iCnt %2)==0){
    printf("%d\n",iCnt);
   }
   }
   
}

int main(){
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    printEven(iValue);
    return 0;
}