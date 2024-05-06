#include<iostream>
using namespace std;

int product(int a,int b=4){
    return a*b;
}
int main(){
    int a,b;
    cout<<product(3);
    return 0;
}