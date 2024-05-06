#include<iostream>
using namespace std;

class buisnessManLife{
    private:
       string son,daughter,wife;
    public:
       string compName;
       float netWorth;
       int age;
       void personalInfo(string s,string d,string w){
            son=s;
            daughter=d;
            wife=w;
       }
       void publicInfo();
};
void buisnessManLife :: publicInfo(){
    cout<<compName<<endl;
    cout<<netWorth<<endl;
    cout<<age<<endl;
    cout<<son<<endl;
    cout<<daughter<<endl;
    cout<<wife<<endl;
}
int main(){
    buisnessManLife Gyan;
    Gyan.personalInfo("Gyan Junior","gorgeous","Strong Wify");
    Gyan.compName="rickshawLimited";
    Gyan.netWorth=10000000000.00129;
    Gyan.age=30;
    Gyan.publicInfo();
    return 0;
}