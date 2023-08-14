#include <stdio.h>

int main()
{
    int arr[5] = {5, 4, 2, 3, 1};
    int size = sizeof(arr) / sizeof(int);
    int temp;

    for (int x = 0; x < size - 1; x++)
    {
        for (int y = 0; y < size - y - 1; y++)
        {
            if (arr[y] > arr[y + 1])
            {
                temp=arr[y];
                arr[y]=arr[y+1];
                arr[y+1]=temp;
            }
        }
    }
    printf("----------Array after implementating bubble sort---------\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    

    return 0;
}