#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
#define E 0.0001

double f(double x){
    return x*x*x-2*x-5;
}

void secant(double x0,double x1,double e,int max){
    double x2;
    int count=1;
    cout<<setprecision(6);
    while(abs(f(x2))>e){
        if(f(x0)==f(x1)){
            cout<<"mathematical error"<<endl;
            break;
        }
        x2=(x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
        cout<<"interation no. : "<<count<<" "<<x2<<endl;
        x0=x1;
        x1=x2;
        count++;
        if(count>max){
            cout<<"non convergent "<<endl;
            break;
        }
    }

    cout<<"root of the equation is : "<<x2<<endl;
    cout<<"value of equation at this root : "<<f(x2)<<endl;
}

int main(){
    secant(0,1,0.0001,10);
    return 0;
}