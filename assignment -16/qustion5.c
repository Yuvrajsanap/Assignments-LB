#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[],int iSize){
    int iCnt=0;
    int iDigit=0;
    int iSum=0;
    

    for(iCnt=0;iCnt<iSize;iCnt++){
        while(Arr[iCnt]!=0){
            iDigit=Arr[iCnt]%10;
            iSum=iSum+iDigit;
            Arr[iCnt]=Arr[iCnt]/10;
            
        }

        printf("%d\t",iSum);
        iSum=0;
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

    DigitSum(ptr,iCount);  


    free(ptr);

    return 0;
}


