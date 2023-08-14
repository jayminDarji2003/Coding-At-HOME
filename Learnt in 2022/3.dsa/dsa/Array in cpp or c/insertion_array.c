// Insertion in array
#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)       
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int arr[6] = {10, 20, 30, 40, 50};
    int size = 5, element = 55, index = 1,capacity=6;
    // display(arr, size);
    indInsertion(arr, size, element, capacity, index);
    size += 1;
    display(arr,size);
    return 0;
}