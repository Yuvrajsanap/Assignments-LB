#include <stdio.h>

double FhtoCs(float fTemp){
     double iCnt=0.0;

    iCnt=((fTemp-32)*5)/9;

    return iCnt;
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter temperature in fahrenheit");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);
    
    printf("The temperature is: %f",dRet);
    return 0;
}