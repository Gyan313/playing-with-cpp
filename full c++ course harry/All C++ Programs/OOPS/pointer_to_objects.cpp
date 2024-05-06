#include<iostream>
using namespace std;
        
class complex{
    int a,b;
    public:
        
        complex(int x,int y){
            a=x;
            b=y;
        }
        void printData(){
            cout<<"the complex no. is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    complex *ptr=new complex(2,3);
    ptr->printData();
    return 0;
}