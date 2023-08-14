
// Find the area of circle, square ans rectengle using defualt argument.

#include <iostream>
using namespace std;

void area(float radius);
void area(float l, float b);
void area(int side = 9);

int main()
{
    float l, b, radius = 4;
    area(radius);
    cout << "Enter the length and breadth"<<endl;
    cin >> l >> b;
    area(l, b);
    area();
    return 0;
}
void area(float radius)
{
    float r;
    r = (3.14 * radius * radius);
    cout<<"The area of circle is :"<<r<<endl;
}
void area(float l, float b){
    float r;
    r=l*b;
    cout<<"The area of rectengle is :"<<r<<endl;
}
void area(int side){
    int s;
    s=side * side;
    cout<<"The area of sqare is :"<<s<<endl;
}
