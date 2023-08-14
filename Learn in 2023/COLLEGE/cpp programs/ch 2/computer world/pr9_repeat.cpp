// This is the repeat program of the 9th.
#include <iostream>
using namespace std;

class Account
{
private:
    string custName;
    long int accountNo;
    char accountType;

public:
    void getData();
};

class SavingAccount : public Account
{
private:
    long int balance;

public:
    // void open_Balance();
    void ShowBalance();
    void UpdataBalance();
    void Interest();

    // void open_Balance()
    // {
    //     int amount;
    //     cout << "Enter how many amount you want when your account open";
    //     cin >> amount;
    //     balance = amount;
    // }
};

class CurrentAccount : public Account
{
private:
    long int balance;

public:
    void ShowBalance();
    void UpdataBalance();
    // void openBalance();

    // void openBalance()
    // {
    //     int amount;
    //     cout << "Enter how many amount you want when your account open";
    //     cin >> amount;
    //     balance = amount;
    // }
};

void Account::getData()
{
    cout << "Enter customer name : ";
    cin >> custName;
    cout << "Enter account number : ";
    cin >> accountNo;
    cout << "Enter account type [s / c] : ";
    cin >> accountType;

    if (accountType == 'c' || accountType == 'C')
    {
        // void openBalance();
        void CurrentAccount();
    }
    else if (accountType == 's' || accountType == 'S')
    {
        // void open_Balance();
        void SavingAccount();
    }
    else
    {
        cout << "Invalid choice";
    }
}

void CurrentAccount::ShowBalance()
{
    cout << "Balance is : " << balance;
}
void SavingAccount::Interest()
{
    if (balance != 0)
    {
        float r;
        cout << "\nEnter rate of interest : ";
        cin >> r;

        balance = balance + ((balance * r) / 100);
        ShowBalance();
    }
}
void SavingAccount::ShowBalance()
{
    cout << "Balance is : " << balance;
}

void CurrentAccount ::UpdataBalance()
{
    int choice;
    cout << "\n1.Withdrawal";
    cout<<"\n2.Deposit";

    cout << "\n Enter your choice : ";
    cin >> choice;

    if (choice == 1)
    {
        int withdrawal;
        cout << "How many rupees you want to withdrawal : ";
        cin >> withdrawal;

        if (balance >= withdrawal)
        {
            cout << "Rs." << withdrawal << " widthdrawal  sucessfully";
            balance = balance - withdrawal;
            ShowBalance();
        }
        else
        {
            cout << "Insufficient balance";
        }
    }
    else if (choice == 2)
    {
        int add;
        cout << "Enter how many amount you want to deposit : ";
        cin >> add;
        balance = balance + add;

        cout << "Rs." << add << " deposited sucessfully";
        ShowBalance();
    }

    else
    {
        cout << "Enter valid choice " << endl;
    }
}

void SavingAccount::UpdataBalance()
{
    int choice;
    cout << "\n1.Withdrawal";
    cout << "\n2.Deposit";
    cout << "\n3.Interest";

    cout << "Enter your choice : ";
    cin >> choice;

    if (choice == 1)
    {
        int withdrawal;
        cout << "How many rupees you want to withdrawal : ";
        cin >> withdrawal;

        if (balance >= withdrawal)
        {
            cout << "Rs." << withdrawal << " widthdrawal  sucessfully";
            balance = balance - withdrawal;
        }
        else
        {
            cout << "Insufficient balance";
        }
    }
    else if (choice == 2)
    {
        int add;
        cout << "Enter how many amount you want to deposit : ";
        cin >> add;
        balance = balance + add;

        cout << "Rs." << add << " deposited sucessfully";
    }
    else if (choice == 3)
    {
        Interest();
    }
    else
    {
        cout << "Enter valid choice " << endl;
    }
}

int main()
{
    cout << "We are opening your bank account in JD bank" << endl
         << endl;
    Account a;
    CurrentAccount c;
    SavingAccount s;

    a.getData();
    c.ShowBalance();
    c.UpdataBalance();

    s.ShowBalance();
    s.UpdataBalance();
    s.Interest();

    return 0;
}