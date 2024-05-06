#include<iostream>
using namespace std;

class base1{
    int data1;
    public:
        base1(int i){
            data1=i;
            cout<<"base1 class constructor is called "<<endl;
        }
        void printData1(){
            cout<<"value of data is "<<data1<<endl;
        }
};

class base2{
    int data2;
    public:
        base2(int i){
            data2=i;
            cout<<"base2 class constructor is called "<<endl;
        }
        void printData2(){
            cout<<"value of data is "<<data2<<endl;
        }
};

class derived: public base1,public base2{
    int derived1,derived2;
    public:
        derived(int a,int b,int c,int d):base2(a),base1(b){
            derived1=c;
            derived2=d;
            cout<<"derived class constructor is called "<<endl;
        }
        void printDerived(){
            cout<<"value of derived1 =  "<<derived1<<" and the value of derived2 "<<derived2<<endl;
        }
};
int main(){
    derived gyan(2,3,4,5);
    gyan.printData1();
    gyan.printData2();
    return 0;
}