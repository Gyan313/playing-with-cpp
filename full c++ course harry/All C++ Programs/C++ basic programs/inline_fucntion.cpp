#include<iostream>
using namespace std;
 

inline int product(int a,int b){
    return a*b;
}
int main(){
    int a=9,b=1;
    int c=product(a,b);
    cout<<c;
    return 0;
}