// This is the 9th program of the computer world book
#include <iostream>
using namespace std;


            // Defining the "Account" class
class Account
{
    protected:
        long int account_no;
        string cust_name;
        char account_type;
    public:
        void getData();
};
                // Defining the "Current_Account" class
class Current_Account:protected Account{
    private:
        long int balance;
    public:
        void showBalance();
        void updataBalance();
        void interest();

        Current_Account(){
            balance=0;
        }
};
                     // Defining the "Saving_Account" class
class Saving_Account:protected Account{
    private:
        long int balance;
    public:
        void showBalance();
        void updataBalance();

        Saving_Account(){
            balance=0;
        }
};


            // Account class method
void Account::getData(){

    cout<<"Enter customer name : ";
    cin>>cust_name;
    cout<<"Enter account number : ";
    cin>>account_no;
    cout<<"Enter account type [s/c] : ";
    cin>>account_type;

    if (account_type =='c')
    {
        void Current_Account();
    }
    else if (account_type=='s')
    {
        void Saving_Account();
    }
    else{
        cout<<"Invalid choice";
    }   
}

            // current account method
void Current_Account::showBalance()
{
    cout<<"Balance : "<<balance;
}

void Current_Account::interest(){
    if (balance!=0)
    {
        float r;
            cout<<"Enter rate of interest : ";
            cin>>r;

            balance=balance+((balance*r)/100);
            showBalance();
    }
}


        // saving account method
void Saving_Account::showBalance(){
    cout<<"Balance : "<<balance;
}



int main()
{

    return 0;
}