#include<iostream>
#include<cmath>
using namespace std;
        
class point{
    int a,b;
    public:
        point(int x,int y){
            a=x;
            b=y;
        }
        friend double calDis(point p1, point p2);   
        void printData(){
            cout<<"point is ("<<a<<","<<b<<")"<<endl;
        }
};

double calDis(point p1,point p2){
    double x=pow((p2.a-p1.a),2);
    double y=pow((p2.b-p1.b),2);
    double t=sqrt(x*x+y*y);
    return t;
}
int main(){
    point p1(0,2);
    point p2=point(0,0);
    p1.printData();
    p2.printData();
    cout<<"the distance between the points = "<<calDis(p1,p2);
    return 0;
}