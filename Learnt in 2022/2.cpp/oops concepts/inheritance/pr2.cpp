
    //Inheritance access specifire
    /*                  Private     Public      Protected
        1.Private        not in..   not in..    not in..
        2.Protected      private    protected   protected
        3.Public        private     public      protected
    */

#include <iostream>
using namespace std;

class Base
{
    protected:
        int a;
    private:
        int b;
};

class Derived : protected Base
{

};

int main()
{
    // Base b;
    Derived d;
   // cout<<d.a;  //not access
    return 0;
}