// Recursion in cpp
//  Let's take a example of factorial

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1 && n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int num,ans;
    cout << "Enter the number which you want to find the factorial: ";
    cin >> num;
    cout << "The factorial is :" << factorial(num);
    return 0;
}