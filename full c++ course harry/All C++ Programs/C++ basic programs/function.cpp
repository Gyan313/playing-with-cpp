#include<iostream>
using namespace std;
int sum(int a , int b ){
    int a,b;
    return a+b;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int c=sum(num1,num2);
    cout<<"the sum of num1 and num2 ="<<c;
    return 0;
}