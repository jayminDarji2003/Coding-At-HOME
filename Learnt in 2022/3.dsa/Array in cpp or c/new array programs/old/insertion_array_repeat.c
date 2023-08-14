// This is the repeat program of the insertion in array.
#include <stdio.h>
#include<stdlib.h>

void insertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        printf("Your array is already full so we can't add any element");
        exit(1);
    }
    else
    {
        for (int i = size-1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
    }
}

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
}

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7, element = 77, capacity = 10, index = 4;
    insertion(arr, size, element, capacity, index);
    size += 1;
    displayArray(arr, size);
    return 0;
}