#include<iostream>
using namespace std;

void langrange(int *arr1,int *arr2,int x,int n){
    double p=0;
    for(int i=0;i<n;i++){
        double upper=1;
        double lower=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                upper*=(x-arr1[j]);
                lower*=(arr1[i]-arr1[j]);
            }
        }
        p+=(upper/lower)*arr2[i];
    }
    cout<<"value of polynomial at "<<x<<" is "<<p<<endl;
}
int main(){
    int arr1[]={5,7,11,13,17};
    int arr2[]={150,392,1452,2366,5202};
    langrange(arr1,arr2,7,5);
    return 0;
}