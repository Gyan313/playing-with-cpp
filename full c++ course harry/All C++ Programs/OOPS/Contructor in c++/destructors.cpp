#include<iostream>
using namespace std;

int count=0;
class num{
    public:
       num(){
        count++;
        cout<<"calling constructor for the object no. "<<count<<endl;
       }

       ~num(){
        cout<<"calling destructor for the object no. "<<count<<endl;
        count--;
       }
};
int main(){
    cout<<"declaring the 1st object"<<endl;
    num n1;
    {
        cout<<"declaring the other objects "<<endl;
        num n2,n3;
    }
    cout<<"end of the code block"<<endl;
    return 0;
}