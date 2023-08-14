#include <stdio.h>
#include <stdlib.h>

void linearSearch(int arr[], int size, int ele)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == ele)
        {
            printf("Position %d", i);
            exit(0);
        }
    }
    printf("We can't find the element ");
}

int main()
{
    int arr[] = {1, 7, 5, 9, 3};
    int size = 5;
    int ele = 5;
    linearSearch(arr, size, ele);
    return 0;
}