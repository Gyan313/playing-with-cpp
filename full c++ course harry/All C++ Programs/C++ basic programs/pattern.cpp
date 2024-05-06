/*
   1
   4 6
   9 11 13
   17 19 21 23
   
   this is the pattern we have to print
*/ 
#include <iostream>
using namespace std;

int main() {
    int n=1;
    for(int i=0;i<4;i++){
            if(i==3){
                n+=1;
            }
        for(int j=0;j<i+1;j++){
            cout<<n<<" ";
            if(i!=0 && j!=i){
                n+=2;
            }
        }
        cout<<endl;
        n=n+3;
    }
    return 0;
}