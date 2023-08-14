
// Class demo
// syntax for class

/*
  class class_name
    {
        private:
            //data member
        protected:
            //data member
        public:
            //data member
            //methos
    };

    //we can make a function after the class
    The systex is..

     return_type class_name::function name(arguments){
        //statements
      }
*/

#include <iostream>
using namespace std;

class demo
{
private:
    int a, b;

public:
    // void get(){
    //     cout<<"Enter the value of a and b "<<endl;
    //     cin>>a>>b;
    // }
    // Also we can make this type of the metho.
    void get();
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};
void demo::get()
{
    cout << "Enter the value of a and b " << endl;
    cin >> a >> b;
}
int main()
{
    demo d;
    d.get();
    d.display();
    return 0;
}