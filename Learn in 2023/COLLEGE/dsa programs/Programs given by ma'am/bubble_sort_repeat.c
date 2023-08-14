#include <stdio.h>

void printfArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter how many element you want to add in your array : ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("----------Before sorting--------\n");
    printfArray(arr, n);

    bubbleSort(arr, n);

    printf("----------Before sorting--------\n");
    printfArray(arr, n);

    return 0;
}