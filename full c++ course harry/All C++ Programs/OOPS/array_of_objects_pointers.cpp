#include<iostream>
using namespace std;

class shop{
    int item;
    float price;
    public:
       void setData(int x,float y){
        item=x;
        price=y;
       }
       void getData(){
        cout<<"the price of "<<item<<" is "<<price<<endl;
       }
};
int main(){
    shop *ptr=new shop[3];
    shop* ptrItem=ptr;
    int i=0,a,b;
    while(i<3){
        cin>>a>>b;
        ptr->setData(a,b);
        i++;
        ptr++;
    }
    i=0;
    while(i<3){
        ptrItem->getData();
        i++;
        ptrItem++;
    }
    return 0;
}