#include <stdio.h>
#include <stdlib.h>

void createArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter element : ");
        scanf("%d", &arr[i]);
    }
}
void disArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void linearSearch(int arr[], int size, int ele)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            printf("Element is found at %d", i);
            exit(0);
        }
    }
    printf("Element is not able to found");
}

void binarySearch(int arr[], int size, int ele)
{
    int low = 0;
    int mid;
    int high = size - 1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (arr[mid] == ele)
        {
            printf("Element found at %d index ",mid);
            exit(0);
        }
        else if(arr[mid] < ele){
            low=mid+1;
        }
        else{
            high=low-1;
        }
        
    }
    
}

int main()
{
    int size, ele;

    printf("Enter how many element you want to enter in your array : ");
    scanf("%d", &size);
    int arr[size];

    createArray(arr, size);

    printf("-----Display Array------\n");
    disArray(arr, size);

    printf("Which element you want to find : ");
    scanf("%d", &ele);

    // linearSearch(arr,size,ele);
    binarySearch(arr, size, ele);

    return 0;
}