// defualt argument
//  Let's make a program to give interest to the normal people and VIP preple.

#include <iostream>
using namespace std;
float interest(int money,float interests = 1.01)
{
    return money * interests;
}

int main()
{
    int money;
    money=100000;
    cout << "The NORMAL people is receive money after one year is: " << interest(money) << endl;
    cout << "The VIP people is receive money after one year is: " << interest(money,1.1) << endl;
    return 0;
}