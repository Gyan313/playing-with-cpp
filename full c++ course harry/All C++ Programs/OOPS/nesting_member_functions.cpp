#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
    void chk_bin();
public:
    void read();
    void ones_complement();
    void display();
};

void binary ::read(){
    cout<<"enter the binary string : "<<endl;
    cin>>s;
}
void binary :: chk_bin(){
    for(int i=0;i<s.length();i++){
        if(s[i]!='0' && s[i]!='1'){
            cout<<"not a binary string "<<endl;
            exit(1);  // this will exit the whole program not like 'break' , break just exit from the loop
        }
    }
}
void binary :: ones_complement(){
    chk_bin();
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else if(s.at(i)=='1'){
            s.at(i)='0';
        }
    }
}
void binary :: display(){
    cout<<endl<<"displaying the binary string "<<endl;
    // for(int i=0;i<s.length();i++){
    //     cout<<s.at(i);
    // }
    cout<<s;
}

int main(){
    binary a;
    a.read();
    // a.chk_bin();
    a.display();
    a.ones_complement();
    a.display();
    return 0;
}