// This is the program of the deletion in array..

#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}

int Deletion(int arr[], int size, int index)
{  
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    return 1;
}

int main()
{
    int arr[6] = {10, 20, 30, 40, 50};
    int size = 5, index = 1;
    // display(arr, size);
    Deletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}