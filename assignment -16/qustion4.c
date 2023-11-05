#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iSize){
    int iCnt=0;
    int iDigit=0;
    int iDigitCnt=0;
    int iValue=0;
    

    for(iCnt=0;iCnt<iSize;iCnt++){
        iValue=Arr[iCnt];
        while(Arr[iCnt]!=0){
            iDigit=Arr[iCnt]%10;
            Arr[iCnt]=Arr[iCnt]/10;
            iDigitCnt++;
        }

         if(iDigitCnt==3){
             printf("%d\t",iValue);
         }

         iDigitCnt=0;
    
   }

}

int main(){
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
    printf("Enter the number of elements you want to entered : \n");
    scanf("%d",&iCount);

    ptr=(int*)malloc(iCount*sizeof(int));


    printf("Enter the %d Values : \n",iCount);

    for(iCnt=0;iCnt<iCount;iCnt++){       
        printf("\nEnter the element no %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Digits(ptr,iCount);  


    free(ptr);

    return 0;
}

