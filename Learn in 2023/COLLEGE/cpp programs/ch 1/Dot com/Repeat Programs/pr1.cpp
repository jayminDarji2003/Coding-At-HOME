#include <iostream>
using namespace std;

float area(float);
int area(int, int);
int area(int);

int main()
{
    float r = 10.10;
    int l = 10, w = 10, s = 10;

    cout << "The area of circle is : " << area(r) << endl;
    cout << "The area of rectengle is : " << area(l, w) << endl;
    cout << "The area of square is : " << area(s) << endl;

    return 0;
}

float area(float r)
{
    float pi = 3.14;
    return (pi * r * r);
}
int area(int l, int w)
{
    return (l * w);
}
int area(int s)
{
    return (s * s);
}