#include <iostream>
using namespace std;
// swap using pointer variable
// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// swap using reference variable
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    cout << "Enter the value of the a :";
    cin >> a;
    cout << "Enter the value of the b :";
    cin >> b;

    //  swap(&a, &b);   //swap using pointer variable

    swap(a, b);     //swap using reference variable
    
    cout << "The new value of the a is:" << a << endl;
    cout << "The new value of the b is:" << b << endl;
    return 0;
}
