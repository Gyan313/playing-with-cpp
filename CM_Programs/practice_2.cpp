#include<iostream>
using namespace std;

double langrange(double *arr1,double *arr2,double x,int n){
    double y=0;
    for(int i=0;i<=n;i++){
        double L=1;
        for(int j=0;j<=n;j++){
            if(i!=j){
                L*=(x-arr1[j])/(arr1[i]-arr1[j]);
            }
        }
        y+=L*arr2[i];
    }
    return y;
}
int main(){
    double arr1[]={5,7,11,13,17};
    double arr2[]={150,392,1452,2366,5202};
    cout<<langrange(arr1,arr2,7,5);
    return 0;
}