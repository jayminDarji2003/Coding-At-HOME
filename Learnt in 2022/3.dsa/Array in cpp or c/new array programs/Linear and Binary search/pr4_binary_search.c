// Program:- Linear search..which is given by ma'am.
#include <stdio.h>
#include <stdlib.h>

void setData(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d :", i + 1);
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
}

void search(int arr[], int size, int element)
{
    int first,middle,last;

    first = 0;
    last = size - 1;

    while (first <= last)
    {
        middle = (first + last) / 2;
        if (arr[middle] == element)
        {
            printf("element found at %d position", middle);
            exit(0);
        }
        else if (arr[middle] < element)
        {
            first = middle + 1;
        }
        else
        {
            last = middle - 1;
        }
    }
}

int main()
{

    int size, element;

    printf("Enter size of your array : ");
    scanf("%d", &size);

    int arr[size];

    setData(arr, size);
    display(arr, size);

    printf("\nWhich element you want to search : ");
    scanf("%d", &element);

    search(arr,size,element);

    return 0;
}