#include <iostream>
using namespace std;

int main()
{

    // Pointer is special variable which stores the address of the address of the other variable

    int a = 10;
    int *b = &a;
    int **c = &b; // Pointer to pointer
                  // Print value
    cout << "The value of the a is : " << a << endl;
    cout << "The value of the a is : " << *b << endl;
    cout << "The value of the a is : " << (*b) << endl;
    // Print address
    cout << "The address of the a is : " << &a << endl;
    cout << "The address of the a is : " << b << endl;
    cout << "The address of the b is : " << &b << endl;
    cout << "The address of the b is : " << c << endl;

    return 0;
}