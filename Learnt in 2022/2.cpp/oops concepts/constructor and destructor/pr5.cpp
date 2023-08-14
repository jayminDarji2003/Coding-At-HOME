
// Dynamic initialization of object using constructor.
//  Program := Deposit money in bank in the end of the any year give the interst.

#include <iostream>
using namespace std;

class BankDeposit
{
private:
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r); // r can be value like 0.04
    BankDeposit(int p, int y, int r);   // r can be value like 14
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = (float)r / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void BankDeposit ::show()
{
    cout << "Principal amount was = " << principal << endl
         << " return value after = " << returnValue;
}


int main()
{
    BankDeposit bd1, bd2;
    int p, y;
    float r;
    int R;


   /* cout << "Enter the value of principal amount : ";
    cin >> p;
    cout << "Enter year : ";
    cin >> y;
    cout << "Enter the rate of interest : ";
    cin >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show(); */

    cout << "Enter the value of principal amount : ";
    cin >> p;
    cout << "Enter year : ";
    cin >> y;
    cout << "Enter the rate of interest : ";
    cin >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}