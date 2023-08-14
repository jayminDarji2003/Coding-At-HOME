// Exercise program , which is given by the Harry

#include <iostream>
#include<cmath>
using namespace std;

class simpleCalculator
{
private:
    int a, b;

public:
    void getData()
    {
        cout << "Enter the value of a : " << endl;
        cin >> a;
        cout << "Enter the value of b : " << endl;
        cin >> b;
    }
    void performOperations()
    {
        cout << "The value of a + b is : " << a + b << endl;
        cout << "The value of a - b is : " << a - b << endl;
        cout << "The value of a * b is : " << a * b << endl;
        cout << "The value of a / b is : " << a / b << endl;
    }
};

class scientificCalculator
{
private:
    int a,b;
public:
    void get_Data()
    {
        cout << "Enter the value of a : " << endl;
        cin >> a;
        cout << "Enter the value of b : " << endl;
        cin >> b;
    }
    void perform_Operations()
    {
        cout << "The value of cos(a) is : " << cos(a) << endl;
        cout << "The value of sin(a) is : " << sin(a) << endl;
        cout << "The value of exp(a) is : " << exp(a)<< endl;
        cout << "The value of tan(a) is : " << tan(a) << endl;
    }
};

class HybridCalculator:public simpleCalculator,public scientificCalculator{

};

int main()
{
    // scientificCalculator calc;
    // calc.getData();
    // calc.performOperations();

    HybridCalculator calc;
    calc.getData();
    calc.performOperations();
    calc.get_Data();
    calc.perform_Operations();

    return 0;
}