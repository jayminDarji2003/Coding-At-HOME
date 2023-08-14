// This is the 7th number program of the computer world book
#include <iostream>
using namespace std;

class Scheme
{
protected:
    int scheme_id;
    string scheme_name;
    float outgoing_rate;
    float message_charge;
    float bill;

public:
    void getData();
    void putData();
    void getBill();
    void showBill();

    Scheme()
    {
        scheme_id = 0;
        scheme_name = '\0';
        outgoing_rate = 0;
        message_charge = 0;
        bill = 0;
    }

    Scheme(int i, string n, float o, float m, float b)
    {
        scheme_id = i;
        scheme_name = n;
        outgoing_rate = o;
        message_charge = m;
        bill = b;
    }
};
void Scheme::getData()
{
    cout << "Enter scheme Id : ";
    cin >> scheme_id;

    cout << "Enter scheme name :";
    cin >> scheme_name;

    cout << "Enter outgoing rate : ";
    cin >> outgoing_rate;

    cout << "Enter message rate : ";
    cin >> message_charge;
}
void Scheme::putData()
{
    cout << "Scheme id : " << scheme_id << endl;
    cout << "Scheme name : " << scheme_name << endl;
    cout << "Outgoing rate : " << outgoing_rate << endl;
    cout << "Message rata : " << message_charge << endl;
}
void Scheme::getBill()
{
    int msg, call;
    cout << "Message sent : ";
    cin >> msg;
    cout << "Number of call : ";
    cin >> call;

    bill = (msg * message_charge) + (call * outgoing_rate);
    cout << "The bill is : " << bill;
}
void Scheme::showBill()
{
    cout << "The bill is : " << bill;
}


class Customer : private Scheme
{
private:
    int cust_id;
    string name;
    double mobile_no;

public:
    void get_Data();
    void put_Date();

    Customer()
    {
        cust_id = 0;
        name = '\0';
        mobile_no = 0;
    }
    Customer(int i, string n, double m)
    {
        cust_id = i;
        name = n;
        mobile_no = m;
    }
};
void Customer::get_Data()
{
    cout << "Enter customer id : ";
    cin >> cust_id;

    cout << "Enter customer name : ";
    cin >> name;

    cout << "Enter mobile number : ";
    cin >> mobile_no;
}

void Customer::put_Date()
{
    cout << "Customer id : " << cust_id << endl;
    cout << "Customer name : " << name << endl;
    cout << "Mobile number : " << mobile_no << endl;
}

int main()
{
    int choice;
    Scheme s;
    Customer c;
    do
    {
        cout << "1.Create Scheme" << endl;
        cout << "2.Create Customer" << endl;
        cout << "3.Show scheme" << endl;
        cout << "4.Show customer" << endl;
        cout << "5.Get bill" << endl;
        cout << "6.Show bill" << endl;
        cout << "0.Exit" << endl;

        cout << "Enter your choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:

            s.getData();
            break;
        case 2:

            c.get_Data();
            break;
        case 3:
            s.putData();
            break;
        case 4:
            c.put_Date();
            break;
        case 5:
            s.getBill();
            break;
        case 6:
            s.showBill();
            break;
        case 0:
            exit(0);
            break;

        default:
            cout << "Invalid choice";
        }
    } while (choice != 0);

    return 0;
}