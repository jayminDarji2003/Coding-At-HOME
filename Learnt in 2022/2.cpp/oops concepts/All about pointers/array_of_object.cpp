#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is = " << real << endl;
        cout << "The imaginary part is = " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    complex *ptr = new complex[3];
    for (int i = 0; i < 3; i++)
    {   
        cout<<"We are running = "<<i+1<<endl;
        ptr->setData(10, 20);
        ptr->getData();
    }
    return 0;
}