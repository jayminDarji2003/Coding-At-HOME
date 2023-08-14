#include <stdio.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void deletion(int arr[], int ele, int index,int size)
{
    for (int i = index; i < size-1 ; i++)
    {
        arr[i]=arr[i+1];
    }  
}

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int ele = 30;
    int index = 1;
    int capacity = sizeof(arr) / sizeof(int);
    int size = 5;

    display(arr, size);
    deletion(arr, ele, index, size);
    size-=1;
    display(arr, size);
    return 0;
}