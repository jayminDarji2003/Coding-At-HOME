
// Constructor :-(characterstics)

/*  1. Constructor is a member function of any class.
    2.When the object is created the constructor is called automatically.
    3.Same name as class name.
    4.It shoud be declared in the public section of the class.
    5.Do not have return type.
    6.It can have defualt argument.
    7.We cannot refer to their address.
*/

// program :- Let's make simple program of constructor.When the program run "hello world" automatically print.

#include<iostream>
using namespace std;

class demo{
    public:
        demo(void){
            cout<<"hello world";
        }
};

int main(){
    demo d;
    return 0;
}