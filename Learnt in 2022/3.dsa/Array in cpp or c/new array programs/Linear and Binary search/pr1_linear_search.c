
// Program:- Find element using Linear search
#include <stdio.h>
#include <stdlib.h>

void LinearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            printf("Your element is found at the %d index \n", i);
            exit(0);
        }
    }
        printf("We can't find your element in your array");
    
}

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // int size=10;
    // If we don't want to count so use this method
    int size = sizeof(arr) / sizeof(int); // also same
    int element = 100;
    LinearSearch(arr, size, element);
    return 0;
}