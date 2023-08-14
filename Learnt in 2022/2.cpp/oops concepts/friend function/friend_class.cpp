// Friend class

/*   1.It is also possible to make an entire class a friend of another class.
    2.This gives all of the members of the friend class access to the private member of the other clss.
*/

#include <iostream>
using namespace std;

class Complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
};

class Complex
{
private:
    int a, b;
    friend int calculator ::sumRealComplex(Complex o1, Complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is :" << a << " + " << b << "i" << endl;
    }
};
// int calcularor ::sumRealComplex(Complex o1, Complex o2)
// {
//     return (o1.a + o2.a);
// }

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    // calcularor calc;
    // int res = calc.sumRealComplex(Complex o1, Complex o2);
    // cout << "The sum of real part of o1 and o2 is" << res << endl;
    return 0;
}