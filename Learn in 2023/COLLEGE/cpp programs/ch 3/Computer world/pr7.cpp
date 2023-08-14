// Create a class MATRIX of size max.Overload + operator for addition of MATRIX
// Computer world program
#include <iostream>
using namespace std;

class MATRIX
{
private:
    int a[2][2];

public:
    void setData()
    {
        for (int i = 0; i < 2; i++)
        {
            cout << "Enter element for row "<<i+1<<endl;
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void printData()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << a[i][j]<<"\t";
            }
            cout << endl;
        }
    }

    MATRIX operator+(MATRIX m11)
    {
        MATRIX temp;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                temp.a[i][j] = a[i][j] + m11.a[i][j];
            }
        }
        return (temp);
    }
};

int main()
{
    MATRIX m1, m2, m3;

    cout << "------------ Enter first matrix -----------------" << endl;
    m1.setData();
    cout << "------------- Enter the second matrix------------" << endl;
    m2.setData();

    m3 = m1 + m2;
    cout << "---------First matrix is-----------" << endl;
    m1.printData();
    cout << "--------- Second matrix is-----------" << endl;
    m2.printData();

    cout << "----------The result of matrix is----------" << endl;
    m3.printData();
    return 0;
}