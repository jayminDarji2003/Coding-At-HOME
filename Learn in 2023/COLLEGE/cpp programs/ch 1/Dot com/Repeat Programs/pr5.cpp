#include <iostream>
using namespace std;

double power(double m, int n = 2)
{
    double ans=1;
    while (n>0)
    {
        ans=ans * m;
        n--;
    }
    return (ans);
}

int main()
{
    double m, ans;

    cout << "Enter number which you want to get power : ";
    cin >> m;

    ans = power(m);

    cout << "The power of " << m << " is : " << ans << endl;

    return 0;
}