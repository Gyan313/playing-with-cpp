#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int n=0 ;

public:
    void setPrice();
    void display();
};

void shop ::setPrice()
{
    cout << "The id of the item no.- " << n + 1 << endl;
    cin >> itemId[n];
    cout << "The price of the item no.- " << n + 1 << endl;
    cin >> itemPrice[n];
    n++;
}

void shop ::display()
{
    for (int i = 0; i < n; i++)
    {
        cout << "The price of item " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop dukan;
    for (int i = 0; i < 1; i++)
    {
        dukan.setPrice();
    }
    dukan.display();
    return 0;
}