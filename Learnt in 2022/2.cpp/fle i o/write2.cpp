// Program to print 1 to 10 numbers

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[10];
    ofstream obj("print_1_100_print.txt");
    for (int i = 0; i < 10; i++)
    {
        obj << i<<endl;
    }

    return 0;
}