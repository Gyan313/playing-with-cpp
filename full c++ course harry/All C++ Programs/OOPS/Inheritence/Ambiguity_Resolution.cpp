#include<iostream>
using namespace std;

class base1{
    public:
       void animal(){
        cout<<"COW"<<endl;
       }
};
class base2{
    public:
       void animal(){
        cout<<"Gayen"<<endl;
       }
};
class base3 : public base1, public base2{
    public:
       void animal(){
        cout<<"GAU MATA"<<endl;
        // base1::animal();
        // base2::animal();
       }
};
int main(){
    base3 b;
    b.animal();
    return 0;
}