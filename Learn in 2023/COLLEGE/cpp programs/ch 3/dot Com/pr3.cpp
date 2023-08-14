// Write a program to demonstrate the use of pure virtual funtion.
#include <iostream>
using namespace std;

class Base
{
protected:
    int rollNO;
    string name;

public:
    void setData()
    {
        cout << "Enter roll no : ";
        cin >> rollNO;
        cout << "Enter name : ";
        cin >> name;
    }
    virtual void getData() {}
};

class Derived : public Base
{
    public:
        void getData(){
            cout<<"The roll no is : "<<rollNO<<endl;
            cout<<"The name is : "<<name<<endl;
        }
};

int main()
{
    Base *ptr;
    Derived d;

    d.setData();
    ptr=&d;
    ptr->getData();
    return 0;
}