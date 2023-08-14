#include <iostream>
using namespace std;

class ShopItem
{
private:
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is = " << id << endl;
        cout << "Price of this item is = " << price << endl;
    }
};

int main()
{ // we can make like this.
    /* ShopItem s1[3];
       for (int i = 0; i < 3; i++)
       {
           s1[i].setData(10,20);
           s1[i].getData();
       }
   */

    ShopItem *ptr = new ShopItem[3];
    ShopItem *ptrTemp = ptr;
    int p,i;
    float q;
    for ( i = 0; i < 3; i++)
    {
        cout << "Enter Id and price of item " << i + 1<<endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for ( i = 0; i < 3; i++)
    {
        cout << "Item number :" << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}