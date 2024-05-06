#include<iostream>
using namespace std;

int main(){
    int a=2,b=1;
    for(int i=0;i<4;i++){
        static int c=0;
        cout<<a*b+c<<endl;
    }
    return 0;
}