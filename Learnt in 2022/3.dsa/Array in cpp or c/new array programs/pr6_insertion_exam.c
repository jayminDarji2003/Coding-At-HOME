#include <stdio.h>

void ArrayInsertion(int arr[], int size, int capacity, int ele, int index)
{
    if (size >= capacity)
    {
        printf("your array is full \n");
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = ele;
    printf("Successfully insertion \n");
}

void disArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int capacity = sizeof(arr) / sizeof(int);
    int ele = 14;
    int index = 4;

    disArray(arr,size);
    ArrayInsertion(arr,size,capacity,ele,index);
    size +=1;
    disArray(arr,size);
    return 0;
}