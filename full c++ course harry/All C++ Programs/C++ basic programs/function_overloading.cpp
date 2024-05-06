#include<iostream>
using namespace std;

int sum(int a,int b){
    cout<<"using func 1"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"using func 2"<<endl;
    return a+b+c;
}
int volume(int l,int b,int h){
    return l*b*h;
}
int volume(int r,int h){
    return (3.14*r*r*h);
}
int volume(char l){
    return l*l*l;
}
int main(){
    int a=3,b=4,c=6;
    cout<<sum(a,b)<<endl<<endl;
    cout<<sum(a,b,c);
    cout<<"volume of cuboid is "<<volume(3,4,6)<<endl;
    cout<<"volume of cube is "<<volume(3)<<endl;
    cout<<"volume of cylinder is "<<volume(3,4)<<endl;
    return 0;
}