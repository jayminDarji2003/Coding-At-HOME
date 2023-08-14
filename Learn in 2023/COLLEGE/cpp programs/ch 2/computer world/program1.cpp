// Program of computer world book
/*   Using friend function find the maximum from given two numbers from two different classes.*/

#include <iostream>
using namespace std;

class B;

class A{
private:
    int n1;
public:
    void getN(){
        cout << "Enter number a : ";
        cin >> n1;
    }
    void putN(){
        cout << "The number is : " << n1 << endl;
    }
    // A(){
    //     n1=0;
    // }
    // A(int a){
    //     n1=a;
    // }
    // ~A(){
    //     n1=0;
    // }
    friend int greater(A &,B &);
};

class B
{
// private:
public:
    int n2;
    void getNN(){
        cout << "Enter number b : ";
        cin >> n2;
    }
    void putNN(){
        cout << "The number is : " << n2 << endl;
    }
    // B(){
    //     n2=0;
    // }
    // B(int b){
    //     n2=b;
    // }
    // ~B(){
    //     n2=0;
    // }
    friend int greater(A &,B &);
};


        // This is the main logic of the program
int greater(A &a, B &b)
{
    if (a.n1 > b.n2)
    {
        // cout << "The greater number is: "<<a.n1;
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    A a1;
    B b1;

    int ans = 0;

    a1.getN();
    b1.getNN();

    a1.putN();
    b1.putNN();
    
    // greater(a1,b1);

    // ans = greater(a1, b1);

    cout << "The greater number is: "<<endl;
    if (ans == 1)
        a1.putN();
    else
        b1.putNN();
    return 0;
}