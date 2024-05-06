#include<iostream>
using namespace std;

class number{
    int a;
    public:
        number(){
            a=0;
        }
        number(int num){
            a=num;
        }

        // if we do this does constructor copy work ? hell yeah its gonna work cause when there is no copy constructor found compler supplies its own copy constructor.
        // number(number &o){
        //     cout<<"copy constructor is happening yo~"<<endl;
        //     a=o.a;
        // }
        
        number(number &o){
            cout<<"copy constructor is happening yo~"<<endl;
            a=o.a;
        }
        void display(){
            cout<<"the value of this object is "<<a<<endl;
        }
};
int main(){
    number n1,n2(5),n4;
    n1.display();
    n2.display();

    number n3(n4);
    n3.display();
    number n5=n2;
    return 0;
}