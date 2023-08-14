#include <iostream>
using namespace std;
int main()
{
    // Precedence of operator

    // Top to bottom
    // 1.*
    // 2./
    // 3.%
    // 4.+
    // 5.-

    int a = 10, b = 20, c;
    c = (((a * b) + 10) - 7);
    cout << "The value of the c is: " << c;

    return 0;
}
