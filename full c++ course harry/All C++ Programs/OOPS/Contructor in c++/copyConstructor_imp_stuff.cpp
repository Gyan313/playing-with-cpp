#include<iostream>
using namespace std;
 
class Test
{
   int a;
public:
   Test(const Test &t) { a=t.a;}
   Test()        { cout<<"hey"<<endl;a=9; }
};
 
Test fun()
{
    cout << "fun() Called\n";
    Test t;
    return t;
}
 
int main()
{
    Test t1;
    Test t2;
    t2=fun();
    return 0;
}