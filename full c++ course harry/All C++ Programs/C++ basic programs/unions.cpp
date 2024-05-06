#include<iostream>
using namespace std;

union test{
    int x;
    float y;
};

int main(){
    union test t;
    t.x=8;
    cout<<t.y<<endl;
    t.y=9.0;
    cout<<t.x;
    return 0;
}