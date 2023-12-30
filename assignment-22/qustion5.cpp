#include<iostream>
using namespace std;

class Pattern{
    private:
    int iRow=0;
    int iCol=0;

    public:
    Pattern(int x,int y){
        iRow=x;
        iCol=y;
    }
    void PatternPrint(){
        int i=0;
        int j=0;

        for(i=1;i<=iRow;i++){
            for(j=1;j<=iCol;j++){
               if(i==j || i<j){
                cout<<j<<"\t";
               }
               else{
                cout<<" \t";
               }
            }
            cout<<"\n";
        }
    }
};
int main()
{
    int iValue1=0,iValue2=0;

    cout<<"Enter number of rows and column:\n";
    cin>>iValue1>>iValue2;

    Pattern *obj=new Pattern(iValue1,iValue2);

    obj->PatternPrint();

    return 0;
}