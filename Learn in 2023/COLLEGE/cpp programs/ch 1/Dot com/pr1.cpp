// Write a program to calculate the area of circle, rectengle and square using function overloading...

#include <iostream>
using namespace std;

int area(int);
int area(int, int);
float areaa(float);

int main()
{
    int r, l, b, s;

    cout << "Enter the value for the square" << endl;
    cout << "Enter side";
    cin >> s;
    cout << "The area of square is :" << area(s);

    cout << "Enter the value of the rectengle" << endl;
    cout << "Enter length";
    cin >> l;
    cout << "Enter breath";
    cin >> b;
    cout << "The area of rectengle is :" << area(l, b);

    cout << endl<< "Enter the value for the circle";
    cout << endl << "Enter the radius";
    cin >> r;
    cout << "The area of the circle is:"<<areaa(r);

    return 0;
}

int area(int s)
{
    return s * s;
}

int area(int l, int b)
{
   return l*b;
}

float areaa(float r)
{
    float pi = 3.14;
    float ans;
   return 3.14 * r * r;
}
