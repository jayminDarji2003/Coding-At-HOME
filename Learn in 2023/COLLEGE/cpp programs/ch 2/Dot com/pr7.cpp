// Create a class called scheme with scheme_id,scheme_name.outgoing_rate,and message_charge.Derive customer class from scheme and include cust_id,name and mobie_no.Define necessary function to read and display data.Create a menu driven program to read call message information for a customer and display the detail bill.

#include <iostream>
using namespace std;

class Scheme
{
private:
    int scheme_id;
    string scheme_name;

protected:
    int outgoing_rate, message_charge;

public:
    void getData()
    {
        cout << "Enter scheme id : ";
        cin >> scheme_id;
        cout << "Enter scheme name : ";
        cin >> scheme_name;
        cout << "Enter outgoing rate : ";
        cin >> outgoing_rate;
        cout << "Enter message charge : ";
        cin >> message_charge;
    }
    void disData()
    {
        cout << "Scheme id is : " << scheme_id << endl;
        cout << "Scheme name is : " << scheme_name << endl;
        cout << "Outgoing rate is : " << outgoing_rate << endl;
        cout << "Message charge is : " << message_charge << endl;
    }
};

class customer : public Scheme
{
private:
    int cust_id, call, msg;
    string name;
    long int mobile_no;

public:
    void getCustData()
    {
        cout << endl
             << "Enter customer name : ";
        cin >> name;
        cout << "Enter customer id : ";
        cin >> cust_id;
        cout << "Enter customer mobile no : ";
        cin >> mobile_no;
    }
    void disCustData()
    {
        cout << "Customer name is : " << name << endl;
        cout << "Customer id is : " << cust_id << endl;
        cout << "Customer mobile no is : " << mobile_no << endl;
    }
    void Call()
    {
        cout << "Enter outgoing call : ";
        cin >> call;
        cout << "Outgoing charge is : " << call * outgoing_rate << endl;
    }
    void message()
    {
        cout << "Enter message : ";
        cin >> msg;
        cout << "Message charge is : " << msg * message_charge << endl;
    }
};

int main()
{
    int choice;
    customer c;
    c.getData();
    c.getCustData();
    c.disData();
    c.disCustData();

    while (1)
    {
        cout << endl
             << "1.Call" << endl;
        cout << "2.Message" << endl;
        cout << "3.Exit" << endl;

        cout << "Enter your choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            c.Call();
            break;
        case 2:
            c.message();
            break;
        case 3:
            exit(0);
            break;
        
        default:
            cout<<"Invalid choice"<<endl;
            break;
        }
    }

    return 0;
}