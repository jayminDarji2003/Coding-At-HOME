#include <stdio.h>
#include <stdlib.h>

void linearSearch(int arr[], int size, int ele)
{
    int i = 0;
    while (i < size)
    {

        if (arr[i] == ele)
        {
            printf("Element is founded at %d position", i);
        }
        i++;
    }
}


int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(arr) / sizeof(int);
    int ele;

    printf("Enter element you want to find = ");
    scanf("%d", &ele);

    linearSearch(arr, size, ele);


    return 0;
}