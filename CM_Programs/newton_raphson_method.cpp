#include<iostream>
#include<iomanip>
using namespace std;
#define E 0.00001

double f(double x){
    return x*x*x-4*x-9;
}
double derivativeF(double x){
    return 3*x*x-4;
}

void newtonRaphson(double x){
    int i=0;
    while(abs(f(x)/derivativeF(x))>=E){
        cout<<"i = "<<++i<<endl;
        x=x-(f(x)/derivativeF(x));
    }
    cout<<"the root of the equation : "<<x<<endl;
    cout<<"soln for this root is "<<f(x)<<endl;
}

int main(){
    double x0;
    cin>>x0;
    newtonRaphson(x0);
    return 0;
}