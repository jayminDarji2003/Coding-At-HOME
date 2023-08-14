// Program:- Linear search..which is given by ma'am.
// Linear search also called sequancial search.

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
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            printf("Element %d was founded at position %d \n", element, i);
            exit(1);
        }
    }
    printf("Element is sizet found");
}

int main()
{

    int element, size;

    printf("Enter size of your array = ");
    scanf("%d", &size);

    int arr[size];
    setData(arr, size);
    display(arr, size);

    printf("\nWhich element you want to search : ");
    scanf("%d", &element);

    search(arr,size,element);

    return 0;
}