// Write a program to calculate the area of circle, rectengle and square using function overloading...

#include <iostream>
using namespace std;
float area(float radius);
float area(float l, float b);
int area(int side);

int main()
{
    float radius, l, b;
    int side;

    cout << "Enter the radius of a circle: ";
    cin >> radius;
    cout << "The area of the circle is: " << area(radius)<<endl;

    cout << "Enter length and breath of the rectengle:";
    cin >> l >> b;
    cout << "The area of the rectengle is: " << area(l,b)<<endl;

    cout<<"Enter the side of the square:";
    cin>>side;
    cout << "The area of the square is: " << area(side);

   return 0;
}

float area(float radius){

    float pi = 3.14;
    return pi * radius * radius;
}

float area(float l, float b){

    return l * b;
}

int area(int side){

    return side * side;
}
