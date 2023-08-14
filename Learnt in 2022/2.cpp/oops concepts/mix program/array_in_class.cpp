
// Array in the class

#include <iostream>
using namespace std;

class Shop
{
private:
    int itemId[3];
    int itemPrice[3];
    int counter;

public:
    void initCounter(void) { counter = 0; };
    void getPrice(void);
    void displayPrice(void);
};

void Shop::getPrice(void)
{
    cout << "Enter the id of your item" << endl;
    cin >> itemId[counter];
    cout << "Enter the price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id "<< itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop dukaan;
    dukaan.initCounter();
        // Also we can use the loop to call the methos.
    for (int i = 1; i <= 3; i++)
    {
        dukaan.getPrice();
    }

        // We can call perticularly.
    // dukaan.getPrice();
    // dukaan.getPrice();
    // dukaan.getPrice();
    dukaan.displayPrice();

    return 0;
}