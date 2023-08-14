#include <stdio.h>

void printfArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[],int n){
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
}

int main()
{
    int arr[] = {10, 38, 38, 28, 93, 36};
    int n = 6;

    printf("-------Display the array befort bubble sort-----\n");
    printfArray(arr, n);

    bubbleSort(arr, n);

    printf("-------Display the array after bubble sort-----\n");
    printfArray(arr, n);

    return 0;
}