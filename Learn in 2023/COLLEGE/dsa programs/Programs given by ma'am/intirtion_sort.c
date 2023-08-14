#include <stdio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void intirtionSort(int arr[], int n)
{
    int key, j;
    // loop for passes
    for (int i = 1; i <= n - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        // loop for each pass
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {7, 5, 9, 6, 3};
    int n = 5;

    printf("--------Before sorting-------\n");
    printArray(arr, n);

    intirtionSort(arr, n);
    
    printf("--------After sorting-------\n");
    printArray(arr, n);
    return 0;
}