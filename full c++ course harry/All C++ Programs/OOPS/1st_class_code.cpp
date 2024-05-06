#include<iostream>
using namespace std;

class employee{

    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int x,int y,int z);
        void printVar(){
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
            cout<<"c = "<<c<<endl;
            cout<<"d = "<<d<<endl;
            cout<<"e = "<<e<<endl;
        }
};
void employee :: setData(int x,int y,int z){
    a=x;
    b=y;
    c=z;
}
int main(){
    employee jagan;
    jagan.d=11;
    jagan.e=10;
    jagan.setData(1,2,3);
    jagan.printVar();
    return 0;
}