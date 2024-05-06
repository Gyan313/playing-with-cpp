#include <iostream>
using namespace std;

// Forward Declaration
class complex;

class calculator
{
public:
    int sumImgPart(complex, complex);
    int sumRealPart(complex, complex);
};

class complex
{
    int a, b;

public:
    // if you want to make the calculator class function friend which you chose means do not make whole class a friend than do --->
    // friend int calculator ::sumImgPart(complex o1, complex o2);
    // friend int calculator ::sumImgPart(complex o1, complex o2);

    // but if you wanted to get rid of all the hassle of making individual funciton a friend than use below code --->
    friend class calculator;

    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printData()
    {
        cout << "the complex no. is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumImgPart(complex o1, complex o2)
{
    cout << "Sum of the imaginary part of both complex no. = ";
    return o1.b + o2.b;
}
int calculator ::sumRealPart(complex o1, complex o2)
{
    cout << "Sum of the real part of both complex no. = ";
    return o1.a + o2.a;
}

int main()
{
    complex c1, c2;
    c1.setData(3, 10);
    c1.printData();

    c2.setData(2, 5);
    c2.printData();

    calculator sumIR;
    cout << sumIR.sumRealPart(c1, c2)<<endl;
    cout << sumIR.sumImgPart(c1, c2);

    return 0;
}