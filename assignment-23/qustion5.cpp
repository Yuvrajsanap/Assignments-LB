#include<iostream>
using namespace std;
class Pattern{
    private:
    int iRow;
    int iCol;
    public:
    Pattern(int x,int y){
        iRow=x;
        iCol=y;
    }

    void PatternPrint()
    {
        int i=0;
        int j=0;
        for(i=1;i<=iRow;i++){
            for(j=1;j<=iCol;j++){
                if(i==j || i==1 || i==iRow){
                    cout<<j<<"\t";
                }
                else if(j==1){
                    cout<<"1\t";
                }
                else if(j==iCol){
                    cout<<"5\t";
                }
                else{
                    cout<<" \t";
                }
            }
            cout<<"\n";
        }
    }
};
int main(){
    int iValue1=0;
    int iValue2=0;

    cout<<"Enter number of rows and column :"<<endl;
    cin>>iValue1>>iValue2;

    Pattern *obj=new Pattern(iValue1,iValue2);

    obj->PatternPrint();


    return 0;
}