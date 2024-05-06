#include <iostream>
using namespace std;

class employee
{
    int Id;
    float salary;

public:
    void setData()
    {
        cout << "Enter the Id of the employee " << endl;
        cin >> Id;
        cout << "Enter the salary of the employee " << endl;
        cin >> salary;
    }
    void getData()
    {
        cout << "the id = " << Id << " and the salary " << salary << endl;
    }
};
int main()
{
    employee GyanCorp[100];
    for (int i = 0; i < 4; i++)
    {
        GyanCorp[i].setData();
    }
    for (int i = 0; i < 4; i++)
    {
        GyanCorp[i].getData();
    }
    return 0;
}