#include <iostream>
using namespace std;

class BankDeposit
{
private:
    int principle_amount, years;
    float interestRate, returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principle_amount = p;
    years = y;
    interestRate = r;
    returnValue = principle_amount;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principle_amount = p;
    years = y;
    interestRate = (float)r / 100;
    returnValue = principle_amount;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << "The principal amount was = " << principle_amount << endl
         << "The amount after interest is = " << returnValue;
}

int main()
{
    BankDeposit bd1;
    int p,y;
    float r;
    cout<<"Enter the value of principal amount = ";
    cin>>p;
    cout<<"Enter years = ";
    cin>>y;
    cout<<"Enter the interst rate = ";
    cin>>r;

    bd1=BankDeposit(p,y,r);
    bd1.show();
    return 0;
}