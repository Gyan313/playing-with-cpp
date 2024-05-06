#include<iostream>
using namespace std;

class employee{
    int Id;
    static int count;

    public:
        void setData(){
        cout<<"Enter id of the employee"<<endl;
        cin>>Id;
        count++;
       }
       void getData(){
        cout<<"the id of the employee is "<<Id<<" and his/her employee no. "<<count<<endl;
       }
       static void staticCount(){
        cout<<"COUNT = "<<count<<endl;
       }
};
int employee :: count;
int main(){
    employee harry,vijay,reluctant;

    harry.setData();
    harry.getData();
    // harry.staticCount();  we can do it also but it is depriciated
    employee ::staticCount();

    vijay.setData();
    vijay.getData();
    employee ::staticCount();

    reluctant.setData();
    reluctant.getData();
    employee ::staticCount();
    return 0;
}