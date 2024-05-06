#include<iostream>
using namespace std;

class base{
    int d1;
    public:
        int d2;
        void setData();
        int getData1();
};

void base :: setData(){
    d1=10;
    d2=20;
}
int base :: getData1(){
    return d1;
}
class derived : public base{
    int d3;
    public:
        void process();
        void display();
};

void derived::process(){
    d3=d2*getData1();
}
void derived:: display(){
    cout<<"the product of the data1 and data2 is "<<d3;
}
int main(){
    derived d;
    d.setData();
    d.process();
    d.display();
    return 0;
}