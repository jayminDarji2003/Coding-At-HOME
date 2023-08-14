#include <stdio.h>

int binarySearch(int arr[], int size, int ele)
{
    int low, mid, high;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == ele)
        {
            return mid;
        }
        if (arr[mid] < ele)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int ele = 1;
    int size = sizeof(arr) / sizeof(int);

    int searchIndex = binarySearch(arr, size, ele);
    printf("Your element is found at %d", searchIndex);

    return 0;
}