#include<iostream>
#include<cmath>
using namespace std;
#define E 0.0001

double f(double x){
    return x*exp(x)-1;
}

void bisection(double a,double b){
    if((f(a)*f(b))>=0){
        cout<<"error"<<endl;
    }
    double x1;
    while(abs(a-b)>E){
        x1=(a+b)/2;
        if((f(x1)*f(b))<0){
            a=x1;
        }
        else{
            b=x1;
        }
    }
    cout<<"root = "<<x1<<endl;
}
int main(){
    bisection(0,1);
    return 0;
}