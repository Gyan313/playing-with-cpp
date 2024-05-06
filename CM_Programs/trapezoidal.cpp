#include<iostream>
using namespace std;

double f(double x){
    return 1/(1+x);
}

double trapezoidal(double a,double b,int n){
    double h=(b-a)/n;
    double s=f(a)+f(b);
    for(int i=0;i<n;i++){
        s+=2*f(a+i*h);
    }
    return (h/2)*s;
}
int main(){
    
    return 0;
}