#include <stdio.h>
double CirculeArea(float fRadius){
    float PI=3.14f;
    double dArea=0.0;

    dArea=(PI*fRadius*fRadius);

    return dArea;
}
int main()
{

    float FValue=0.0;
    double dRet=0.0;

    printf("Enter radius");
    scanf("%f",&FValue);

    dRet=CirculeArea(FValue);

    printf("Area of circle is %f",dRet);
    
    return 0;
}