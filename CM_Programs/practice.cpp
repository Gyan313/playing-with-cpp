#include<iostream>
using namespace std;
#define E 0.001

double f(double x){
    return x*x*x - 4*x - 9;
}

double derivateF(double x){
    return 3*x*x - 4;
}

// void newtonRaphson(double a){
//     int i=0;
//     while(abs(f(a)/derivateF(a))>=E){
//         cout<<"step "<<++i<<" approx = "<<a<<endl;
//         a=a-(f(a)/derivateF(a));
//     }
//     cout<<"the final approx = "<<a<<endl;
// }

// int i=0;
// void bisection(double a, double b){
//     if(f(a)*f(b)>=0){
//         cout<<"enter the right values "<<endl;
//         return;
//     }
//     if(abs(b-a)<E){
//         return;
//     }
//     double x1=(a+b)/2;
//     i++;
//     cout<<"step "<<i<<" root = "<<x1<<endl;
//     if(f(a)*f(x1)<0){
//         b=x1;
//     }
//     else{
//         a=x1;
//     }
//     bisection(a,b);
// }


void secant(double x0,double x1,int max){
    double x2;
    int count=1;
    while(abs(f(x2))>E){
        if(f(x0)==f(x1)){
            cout<<"mathematical error "<<endl;
            break;
        }
        x2=(x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
        cout<<"step "<<count++<<" = "<<x2<<endl;
        x0=x1;
        x1=x2;
        if(count>max){
            cout<<"non convergent "<<endl;
            break;
        }
    }
    cout<<"the root of the equation is "<<x2<<endl;
}
int main(){
    secant(2,3,10);
    return 0;
}