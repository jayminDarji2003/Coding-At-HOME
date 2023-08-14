#include<iostream>
using namespace std;
/*
    Syntax for initialization list in constructor:
    constructor_name(int a,int b) : x(a),y(b){
         constrtor body
         This is same as:-
            x=a;
            y=b;
    }
*/

class initConstructorList{
private:
    int a,b;
public:
        // Cases:-
    // initConstructorList(int x,int y) : a(x),b(y)
    // initConstructorList(int x,int y) : a(x),b(x+y)
    // initConstructorList(int x,int y) : a(x),b(x*y)
    // initConstructorList(int x,int y) : a(x),b(a + y)
    // initConstructorList(int x,int y) : b(x),a(b + y) ===> This will create problem because a will be initialized first
    // initConstructorList(int x,int y) : a(x),b(a + y)
    initConstructorList(int x,int y) : a(x),b(y)
    {
        cout<<"Constructor is executed"<<endl;
        cout<<"The value of a is = "<<a<<endl;
        cout<<"The value of b is = "<<b<<endl;
    }

};

int main(){
    initConstructorList jay(10,20);
    return 0;
}   