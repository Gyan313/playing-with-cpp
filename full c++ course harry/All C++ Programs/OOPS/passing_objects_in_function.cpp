#include<iostream>
using namespace std;

class sum2Num{
    int a;
    int b;
    public:
       void initialize(int n1,int n2){
        a=n1;
        b=n2;
       }
       void displaySum(){
        cout<<"sum of the no. = "<<a+b<<endl;
       }
       void sum_via_objects(sum2Num o1,sum2Num o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
       }
};
int main(){
    sum2Num s1,s2,s3;

    s1.initialize(2,3);
    s1.displaySum();

    s2.initialize(5,9);
    s2.displaySum();

    s1.sum_via_objects(s1,s2);
    s1.displaySum();

    return 0;
}