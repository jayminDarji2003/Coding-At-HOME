// Define currency class with contains rupees and paisa as data members.Write a friend function AddCurrency() which add 2 different currency object and returns a currency object.Write parameterized constructor to initialize and use appropriate function to get the derails from the user and displayed it.
#include <iostream>
using namespace std;

class currency
{
private:
    int rupees;
    int paisa;

public:
    currency()
    {
        rupees = 0;
        paisa = 0;
    }

    void getCurrency()
    {
        cout << "Enter value of rupees : ";
        cin >> rupees;
        cout << "Enter value of paisa : ";
        cin >> paisa;
    }
    void putCurrency()
    {
        cout << "Rupees is : " << rupees << endl;
        cout << "Paisa is : " << paisa << endl;
    }

    friend currency AddCurrency(currency, currency);
};

currency AddCurrency(currency a, currency b)
{
    currency r;

    r.rupees = a.rupees + b.rupees;
    r.paisa = (a.paisa + b.paisa)%100;

    return (r);
}

int main()
{
    currency c1, c2,c3;
    c1.getCurrency();
    c2.getCurrency();

    cout<<"\t\tDisplay data \n";

    c1.putCurrency();
    c2.putCurrency();

   c3 =  AddCurrency(c1, c2);

   cout<<"\t\t Addition \n";

   c3.putCurrency();
    return 0;
}