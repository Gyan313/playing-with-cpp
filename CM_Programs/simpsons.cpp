#include<iostream>
using namespace std;

double f(double x){
    return 1/(1+x);
}

double simpsons_1by3rd(double a,double b,int n){
    if(n%2!=0){
        cout<<"wrong value "<<endl;
        return INT_MIN;
    }

    double h=(b-a)/n;
    double s=f(a)+f(b);

    double *x=new double[n];
    x[0]=a;

    for(int i=1;i<n;i++){
        x[i]=x[i-1]+h;
    }

    for(int i=1;i<n;i++){
        if(i%2==0){
            s+=2*(f(x[i]));
        }
        else{
            s+=4*(f(x[i]));
        }
    }

    return s*(h/3);
}


double simspons_3by8th(double a,double b,int n){
    if(n%3!=0){
        cout<<"not right "<<endl;
        return -1;
    }
    
    double h=(b-a)/n;
    double s=f(a)+f(b);
    double *x=new double[n];
    x[0]=a;

    for(int i=1;i<n;i++){
        x[i]=x[i-1]+h;
    }

    for(int i=1;i<n;i++){
        if(i%3==0){
            s+=2*(f(x[i]));
        }
        else{
            s+=3*(f(x[i]));
        }
    }

    return s*(3*h/8);
}

double trapezoidal(double a,double b,int n){
    double h=(b-a)/2;
    double *x=new double[n];
    x[0]=a;

    for(int i=1;i<n;i++){
        x[i]=x[i-1]+h;
    }
    
    double s=(f(a)+f(b))/2;
    for(int i=1;i<n;i++){
        s+=f(x[i]);
    }

    return h*s;
}
int main(){
    double I1=simpsons_1by3rd(0,10,4);
    double I2=simspons_3by8th(0,10,6);
    double I3=trapezoidal(0,10,5);
    cout<<I1<<" "<<I2<<" "<<I3;
    return 0;
}