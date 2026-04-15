#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0)          // Base case-->condition that prevent recursion ; it stops the fn.
        return 1;
    else
        return n * factorial(n - 1);  // Recursive call--> fn call itself with a small input
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    cout << factorial(n);
    return 0;
}
