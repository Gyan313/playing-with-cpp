#include<iostream>
using namespace std;

class bankDeposit{
    int principle;
    int year;
    float interestRate;
    int returnValue;
    public:
        // bankDeposit(){}
        bankDeposit(int p,int y,float r);
        bankDeposit(int p,int y,int r);
        void show();
};
bankDeposit ::bankDeposit(int p,int y,float r){
    principle=p;
    year=y;
    interestRate=r;
    returnValue=principle;
    for(int i=0;i<y;i++){
        returnValue*=(1+interestRate);
    }
}
bankDeposit ::bankDeposit(int p,int y,int r){
    principle=p;
    year=y;
    interestRate=float(r)/100;
    returnValue=principle;
    for(int i=0;i<y;i++){
        returnValue*=(1+interestRate);
    }
}
void bankDeposit::show(){
    cout<<"Principle amount is "<<principle<<" for "<<year<<" years and the amount you are getting "<<returnValue<<endl;
}
int main(){
    int p,y,R;
    float r;
    cout<<" value of p,y,r"<<endl;
    cin>>p>>y>>r;
    bankDeposit bd1=bankDeposit(p,y,r);
    bd1.show();
    cout<<" value of p,y,R"<<endl;
    cin>>p>>y>>R;
    bankDeposit bd2=bankDeposit(p,y,R);
    bd2.show();
    return 0;
}