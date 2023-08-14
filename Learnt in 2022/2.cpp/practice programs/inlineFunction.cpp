    //Example of inline function..

#include<iostream>
using namespace std;

inline int product(int x,int y){
    return x*y;
}

int main(){
    int a,b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"The product of two number is : "<<product(a,b)<<endl;
    cout<<"The product of two number is : "<<product(a,b)<<endl;
    cout<<"The product of two number is : "<<product(a,b)<<endl;
    cout<<"The product of two number is : "<<product(a,b)<<endl;
    cout<<"The product of two number is : "<<product(a,b)<<endl;
    return 0;
}

    // What to do inline function:-

    // 1.Inline function is for the small code.
    // 2.(for normal function) Whenevr we call the function our value go to that function and then return the statement.
    // 3.In inline function our function come to the calling section and return at a time.

    // When we dont't use inline function:-
    // 1.When we make recursion.
    // 2.When we make static variable.
    // 3.When we make loops in our function.
    // 4.In short our code is very long so that time we don't use the inline function.