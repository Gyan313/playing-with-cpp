#include<iostream>
using namespace std;
        
class complex{
    int a,b;
    public:
        // complex(); this is default constructor
        complex(int x,int y); // this is a parameteriesed constructor
        void printData(){
            cout<<"the complex no. is "<<a<<" + "<<b<<"i"<<endl;
        }
};
// complex :: complex(){
//     a=10;
//     b=34;
// }
complex :: complex(int x,int y){
    a=x;
    b=y;
}
int main(){
    complex c =complex(4,7);
    c.printData();
    return 0;
}