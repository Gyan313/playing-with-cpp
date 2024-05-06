#include<iostream>
using namespace std;

class employee{
    public:
        int id;
        float salary;
        employee(int empId){
            id=empId;
            salary=345.34;
        }
        employee(){}
};

class analyst : employee{
    public:
       int a;
       analyst(int empId,float sal){
        id=empId;
        salary=sal;
        a=10;
       }
       void getdata(){
        cout<<id<<endl;
       }
};
int main(){
    employee e1(12),e2(123);
    cout<<e1.id<<endl;
    cout<<e1.salary<<endl;
    cout<<e2.id<<endl;
    cout<<e2.salary<<endl;
    analyst a1(100,45.345);
    a1.getdata();
    cout<<a1.a<<endl;
    return 0;
}