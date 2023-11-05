#include <stdio.h>

int FirstOcc(int Arr[],int iLength,int iNo){
  int iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++){
        if((Arr[iCnt])==iNo){
            return iCnt;
        }
    }

    return -1;
}
int main()
{
    int iSize=0,iRet=0,iCnt=0,iValue=0;
   int *p=NULL;
   

   printf("Enter number of element");
   scanf("%d",&iSize);

   printf("Enter the number");
   scanf("%d",&iValue);

    p=(int *)malloc(iSize *sizeof(int));

   if(p==NULL){
    printf("Unable to allocate memory");
    return -1;
   }

   for(iCnt=0;iCnt<iSize;iCnt++){
    printf("Enter element : %d",iCnt+1);
    scanf("%d",&p[iCnt]);
   }

   iRet=FirstOcc(p,iSize,iValue);

   if(iRet==-1){
    printf("There is no such number");
   }else{
    printf("First occurance of number is %d",iRet);
   }
   free(p); 

    return 0;
}