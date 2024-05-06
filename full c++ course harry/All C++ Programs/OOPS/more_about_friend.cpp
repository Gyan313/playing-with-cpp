#include<iostream>
using namespace std;

class c2;
class c1{
    int num1;
    friend void swap(c1 &,c2 &);
    public:
        void inData(int a){
            num1=a;
        }
        void display(){
            cout<<"1st no. = "<<num1<<endl;
        }
};
class c2{
    int num2;
    friend void swap(c1 &x,c2 &y);
    public:   
        void inData(int b){
            num2=b;
        }
        void display(){
            cout<<"2nd no. = "<<num2;
        }
};

void swap(c1 &x,c2 &y){
    int temp=x.num1;
    x.num1=y.num2;
    y.num2=temp;
}

int main(){
    c1 a;
    c2 b;
    a.inData(10);
    b.inData(202);
    swap(a,b);
    a.display();
    b.display();
    return 0;
}