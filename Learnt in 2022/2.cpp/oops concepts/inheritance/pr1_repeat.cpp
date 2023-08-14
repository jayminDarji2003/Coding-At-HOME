// This is repeat program of the first program
#include <iostream>
using namespace std;

class A
{
private:
    int a;
public:
    int b;
    void setData()
    {
        a = 10;
        b = 20;
    }
    int getData()
    {
        return a;
    }
};

class B : public A
{
private:
    int c;

public:
    void product()
    {
        c = b * getData();
    }
    void display(){
        cout<<"The value of a is : "<<getData()<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
    }
};

int main()
{
    B _b;
    _b.setData();
    _b.product();
    _b.display();
    return 0;
}