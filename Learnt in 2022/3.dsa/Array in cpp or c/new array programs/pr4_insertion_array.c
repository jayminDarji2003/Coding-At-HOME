// Insertion into the array
#include <stdio.h>

int indSortedInsertion(int arr[], int size, int ele, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = ele;
    return 1;
}

void displayArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");
}   

int main()
{
    int arr[10] = {12, 19, 29, 36, 48};

    int capacity = sizeof(arr) / sizeof(int);
    int size = 5, ele = 45, index = 1;

    displayArray(arr,size);
    indSortedInsertion(arr, size, ele, capacity, index);
    size +=1;
    displayArray(arr,size);

    return 0;
}