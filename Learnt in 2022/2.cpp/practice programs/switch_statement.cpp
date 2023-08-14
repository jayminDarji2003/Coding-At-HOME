#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char ch;

    cout << "Enter the value of the a: ";
    cin >> a;

    cout << "Enter the value of the b: ";
    cin >> b;

    cout << "+ for addition" << endl
         << "- for subtraction" << endl
         << "* for multiplication" << endl
         << "/ for divition"<<endl;
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << a+b;
        break;

     case '-':
        cout << a-b;
        break;

     case '*':
        cout << a*b;
        break;

     case '/':
        cout << a/b;
        break;

    default:
        break;
    }

    return 0;
}
