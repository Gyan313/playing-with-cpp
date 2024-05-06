#include<iostream>
using namespace std;

class A{
    public:
       int a;
       virtual void display(){
        cout<<"base class = "<<a<<endl;
       }
};

class B : public A{
    public:
       int b=90;
       void display(){
        cout<<"derived class = "<<b<<endl;
       }
};

int main(){
    A objB;
    B objD;
    A *ptr1;
    ptr1=&objD;
    ptr1->a=12;
    ptr1->display();
    return 0;
}