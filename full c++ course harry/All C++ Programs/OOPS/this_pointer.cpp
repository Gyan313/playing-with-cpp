#include<iostream>
using namespace std;

class A{
    int a;
    public:
       A& setData(int a1){
        a=a1;
        return *this;
       }
       void getData(){
        cout<<"a = "<<a<<endl;
       }
};
int main(){
    A b;
    b.setData(3).getData();
    return 0;
}