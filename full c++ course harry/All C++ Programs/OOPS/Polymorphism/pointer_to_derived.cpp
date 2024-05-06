#include<iostream>
using namespace std;

class baseClass{
    public:
       int var_base;
       void display(){
        cout<<"base class display() "<<var_base<<endl;
       }
};

class derivedClass : public baseClass{
    public:
       int var_derived;
       void display(){
        cout<<"derived class display() "<<var_derived<<endl;
       }
};

int main(){
    baseClass *ptr;
    baseClass objB;
    derivedClass objD;
    ptr=&objD;
    ptr->var_base=12;
    // ptr->var_derived=123; cant happen oops
    ptr->display();

    derivedClass *ptr1;
    ptr1=&objD;
    ptr1->var_derived=11;
    ptr1->var_base=123;
    ptr1->display();
    ptr1->baseClass::display();
    ptr->display();
    return 0;
}