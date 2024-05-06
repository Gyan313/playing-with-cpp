#include<iostream>
using namespace std;

struct employee{
    int code=100;
    float salary;
    char name[10];
};
int main(){
    employee e1; // in c we cannot do this we have to write whole 'struct employee e1' so this is change in c++
    cout<<e1.code;
    return 0;
}