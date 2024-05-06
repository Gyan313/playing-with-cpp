#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define EPSILON 0.001
double func(double x)
{
	return x*x*x - 4*x - 9;
}
void bisection(double a, double b)
{
	if (func(a) * func(b) >= 0)
	{
		cout << "You have not assumed right a and b\n";
		return;
	}

	double c ;
    int n=(int)((log(abs(b-a))-log(EPSILON))/log(2));
    int i=0;
	while (i<=n)
	{
		c = (a+b)/2;
		if (func(c) == 0.0)
			break;
		else if (func(c)*func(a) < 0)
			b = c;
		else
			a = c;

        i++;
        cout<<"x"<<i<<" = "<<c<<endl;
	}
	cout << "The value of root is : " << c;
}
int main()
{
	double a =3, b = -3;
	bisection(a, b);
	return 0;
}
