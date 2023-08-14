// Constructor with defualt argument.

#include <iostream>
using namespace std;
class demo
{
private:
    int a,b;
public:
        //When we give dekfualt argument  is constructor it's called defualt argument.
    demo(int x,int y=10){   
        a=x;
        b=y;
    }
    void sum(){
        int c=a+b;
        cout<<"The sum of two number is = "<<c;
    }
};
int main()
{
    demo d(10);
    d.sum();
    return 0;
}