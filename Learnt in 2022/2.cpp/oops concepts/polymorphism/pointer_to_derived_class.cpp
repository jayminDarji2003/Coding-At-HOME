// Pointer to derived class

#include <iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass
{
     public:
        int var_derived;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"Displaying Base class variable var_derived "<<var_derived<<endl;
        }
};

int main()
{
    BaseClass *base_class_ptr;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_ptr = &obj_derived;  // Pointing base class pointer to derived class 

    base_class_ptr->var_base=32;
    base_class_ptr->display();

    // base_class_ptr->var_derived=32;  // Not set the value and will throw an error
    // base_class_ptr->display();

    DerivedClass *derived_class_ptr;
    derived_class_ptr=&obj_derived;

    derived_class_ptr->var_base=550;
    derived_class_ptr->var_derived=76;
    derived_class_ptr->display();


    return 0;
}