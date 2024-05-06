#include<iostream>
#include<cmath>
using namespace std;

class simpleCalculator{
    protected:
        double n1;
        double n2;
    public:
        void setValue(double,double);
};

void simpleCalculator :: setValue(double a, double b){
    n1=a;
    n2=b;
}


class scientificCalculator{
    protected:
        double num;
    public:
        void ValueSet(double);
};
void scientificCalculator :: ValueSet(double a){
    num=a;
}


class hybridCalculator : public simpleCalculator,public scientificCalculator{
    public:
       void display_sum(){
        cout<<"sum = "<<n1+n2<<endl;
       }
       void display_subtract(){
        cout<<"subtraction = "<<abs(n1-n2)<<endl;
       }
       void display_product(){
        cout<<"multiplication = "<<n1*n2<<endl;
       }
       void display_division(){
        cout<<"division = "<<n1/n2<<endl;
       }
       void display_log(){
        cout<<"logarithm = "<<log(num)<<endl;
       }
       void display_sin(){
        cout<<"sin(x) = "<<sin(num)<<endl;
       }
       void display_cos(){
        cout<<"cos(x) = "<<cos(num)<<endl;
       }
       void display_exp(){
        cout<<"exponential = "<<exp(num)<<endl;
       }
};

int main(){
    hybridCalculator h;
    h.ValueSet(5);
    h.display_sin();
    return 0;
}