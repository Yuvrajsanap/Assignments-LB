#include <stdio.h>

double RectArea(float fWidth,float fHigth){
    float fArea=0;

    fArea=fWidth*fHigth;

    return fArea;
}
int main()
{
    float fValue1=0.0,fValue2=0.0;
    double dRet=0.0;

    printf("Enter higth");
    scanf("%f",&fValue1);

    printf("Enter higth");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);

    printf("the area of rectangle is %f",dRet);
    return 0;
}