#include <iostream>
using namespace std;

class a
{
    int x, y;

public:
    a(void)
    {
        x = 10;
        y = 20;
    }
    void sum()
    {
        int add = x + y;
        cout << "The sum of two number is : " << add;
    }
};

int main()
{
    a _a;
    _a.sum();
    return 0;
}