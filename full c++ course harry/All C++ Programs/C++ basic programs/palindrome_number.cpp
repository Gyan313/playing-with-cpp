#include <iostream>
using namespace std;
// Function to check if a number is a palindrome or not.
int Palindrome(int n)
{
    // Find reverse of n
    int reverse = 0;
    for (int i = n; i > 0; i /= 10)
        reverse = reverse * 10 + i % 10;
    // To check if they are same
    return (n == reverse);
}
// function to prints palindrome between a minimum and maximum number
//  void countPalindrome(int minimum, int maximum)
//  {
//  for (int i = minimum ; i <= maximum; i++)
//  if (Palindrome(i))
//  cout << i << " ";
//  }

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    int a=Palindrome(n);
    if(n==a){
        cout<<"Number is a palindrome "<<endl;
        cout<<"Name : Gyan Dev "<<endl;
        cout<<"Roll No. : 133"<<endl;
    }
    else{
        cout<<"Number is a palindrome "<<endl;
    }
    return 0;
}