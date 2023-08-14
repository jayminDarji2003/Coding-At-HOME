//

#include <iostream>
using namespace std;

int main()
{

    // Basic of pointer
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is : " << *(ptr) << endl;

    // New operator
    int *p = new int(20);
    cout << "The value at address p is : " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 3;
    arr[1] = 30;
    arr[2] = 34;
    // for (int i = 0; i < 3; i++)
    // {
    // cout<<(arr)[i]<<endl;
    // }

    // Delete operator
    delete arr;
        //print that data
    for (int i = 0; i < 3; i++)
    {
        cout << (arr)[i] << endl;
    }

    return 0;
}