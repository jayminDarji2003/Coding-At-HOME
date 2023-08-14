// Write a program to create function template for finding maximum value contained in array.

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int arr[10];
int n,i;

template <class t>

void max(t a[], int n)
{
    int ma=0;
    for (i = 0; i < n; i++)
    {
        cout << "Enter element "<<i+1<<": ";
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << "Element is : " << a[i] << endl;
    }
    for (i = 0; i < n; i++)
    {
        if (ma < a[i])
        {
            ma = a[i];
        }
    }
    cout<<"Max is : "<<ma<<endl;
}

int main()
{
    max(arr, 5);
    return 0;
}