// Virtual functions
#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base=1;
   virtual void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived=2;
    void display()
    {
        cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        cout << "Displaying Base class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_ptr;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_ptr = &obj_derived;
    base_ptr->display();
    return 0;
}