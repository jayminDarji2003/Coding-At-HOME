// Virtual function example
#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
   virtual void setData(int x)
    {
        a = x;
    }
  virtual  void Display_data()
    {
        cout << "The value of a is : " << a << endl;
    }
};
class B :public A
{
private:
    int b;

public:
    void setData(int y)
    {
        b = y;
    }
    void Display_data()
    {
        cout << "The value of b is : " << b << endl;
    }
};

int main()
{
    A *A_ptr, a_obj;
    B b_obj;
    A_ptr = &b_obj;

    A_ptr->setData(30);
    A_ptr->Display_data();

    return 0;
}

/*
    Notes:-
            1.When we don't make virtual class the pointer will point to the base class's functions.
            2.After making the function virtual the value will set to the derived class's function and print as well.
*/