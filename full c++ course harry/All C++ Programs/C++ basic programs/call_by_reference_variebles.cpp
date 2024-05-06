#include<iostream>
using namespace std;

// int & swapNum(int &a,int &b){                    // (int &) here is data of
    // int temp=b;                                  // the function ,
//     b=a;                                         // that returns a reference 
    // a=temp;                                      // variable.
//     return b;
// }
void swapNum(int &a,int &b){
    int temp=b;
    b=a;
    a=temp;
    return b;
}
int main(){
    int a=9,b=0;
    cout<<a<<" "<<b<<endl;
    swapNum(a,b)=100;
    cout<<a<<" "<<b;

    return 0;
}