#include<iostream>
using namespace std;

void print(int n){
    int s=n-(n-1);
    cout<<s<<endl;
    print(s+1);
}
int main(){
    int n;
    cin >> n;
  
    print(n);
}