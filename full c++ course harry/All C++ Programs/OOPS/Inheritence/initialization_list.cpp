#include<iostream>
using namespace std;

class A{
    int a;
    int b;
    public:
        A(int i,int j):a(j+b),b(j)
        {
            // body of constructors
        }
        void get(){
            cout<<a<<endl<<b;
        }
};
int main(){
    A a(1,3);
    a.get();
    return 0;
}