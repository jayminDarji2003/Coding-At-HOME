/*Create a class account that stores customer name , account no , types of account . From this derive classes  CurrentAccount and SavingAccount to include necessary member function to do the following :
    -> Accepts deposit from customer and update balance.
    -> Compute and Deposit interest.
    -> Permit withdrawal and Update balance . . .
*/

#include <iostream>
using namespace std;

class Account
{
private:
    string customer_name;
    int account_no;
    char type_account;

protected:
    int balance;

public:
    void getData()
    {
        cout << "Enter customer name : ";
        cin >> customer_name;
        cout << "Enter account no : ";
        cin >> account_no;
        cout << "Enter account type [s/c] : ";
        cin >> type_account;
        cout << "Enter current balance : ";
        cin >> balance;
    }
    void disData()
    {
        cout << "Customer name is : " << customer_name << endl;
        cout << "Account no is : " << account_no << endl;
        cout << "Type of account is : " << type_account << endl;
        cout << "Current balance is : " << balance << endl;
    }
};

class CurrentAccount : public Account
{
private:
    int deposit, withdraw;
    float InterestRate;

public:
    void depositCurrent()
    {
        cout << "Enter how much money you want to deposite : ";
        cin >> deposit;
        balance = deposit + balance;
    }
    void withdrawCurrent()
    {
        cout << "Enter how much money you want to withdraw : ";
        cin >> withdraw;
        balance = balance - withdraw;
    }
    void interestRate()
    {
        cout << "Enter interest rate : ";
        cin >> InterestRate;
        balance = ((balance * InterestRate) / 100) + balance;
    }
};

class SavingAccount : public Account
{
private:
    int deposit, withdraw;
    float InterestRate;

public:
    void depositSaving()
    {
        cout << "Enter how much money you want to deposite : ";
        cin >> deposit;
        balance = deposit + balance;
    }
    void withdrawSaving()
    {
        cout << "Enter how much money you want to withdraw : ";
        cin >> withdraw;
        balance = balance - withdraw;
    }
    void interestRate()
    {
        cout << "Enter interest rate : ";
        cin >> InterestRate;
        balance = ((balance * InterestRate) / 100) + balance;
    }
};

int main()
{
    CurrentAccount c;
    SavingAccount s;
    int choice1, choice2, choice3;

    while (1)
    {
        cout << "1.For Saving account " << endl;
        cout << "2.For current account " << endl;
        cout << "3.Exit " << endl;

        cout << "Enter your choice : ";
        cin >> choice1;

        switch (choice1)
        {
        case 1:
            s.getData();
            cout << "1.Deposit" << endl;
            cout << "2.Withdraw" << endl;
            cout << "3.Interest" << endl;

            cout << "Enter your choice : ";
            cin >> choice2;

            switch (choice2)
            {
            case 1:
                s.depositSaving();
                s.disData();
                break;
            case 2:
                s.withdrawSaving();
                s.disData();
                break;
            case 3:
                s.interestRate();
                s.disData();
                break;

            default:
                cout << "Invalid choice" << endl;
                break;
            }
            break;
        case 2:
            c.getData();
            cout << "1.Deposit" << endl;
            cout << "2.Withdraw" << endl;
            cout << "3.Interest" << endl;

            cout << "Enter your choice : ";
            cin >> choice3;

            switch (choice3)
            {
            case 1:
                c.depositCurrent();
                c.disData();
                break;
            case 2:
                c.withdrawCurrent();
                s.disData();
                break;
            case 3:
                c.interestRate();
                s.disData();
                break;

            default:
                cout << "Invalid choice" << endl;
                break;
            }
            break;

        default:
            exit(0);
            break;
        }
    }

    return 0;
}