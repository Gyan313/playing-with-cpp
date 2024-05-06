#include<iostream>
using namespace std;
        
class complex{
    int a,b;
    public:
        complex(int x,int y){
            a=x;
            b=y;
        }
        complex(int x){
            a=x;
            b=0;
        }
        complex(){
            a=0;
            b=0;
        }
        void printData(){
            cout<<"the complex no. is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    complex c =complex(4,7);
    c.printData();
    complex c1=complex(4);
    c1.printData();
    complex c2 ;
    c2.printData();
    return 0;
}