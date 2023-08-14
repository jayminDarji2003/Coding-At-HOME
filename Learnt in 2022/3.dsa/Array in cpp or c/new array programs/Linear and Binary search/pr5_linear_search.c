    // Find element using linear search.
#include<stdio.h>

void linearSearch(int arr[],int size,int ele){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==ele)
        {
            printf("Element found at index %d",i);
            exit(0);
        }
    }
    printf("We can't found element");
}

int main(){
    int arr[]={10,20,30,40,44,39,88,89,76,100};
    int ele=100;
    int size=10;

    linearSearch(arr,size,ele);
    return 0;
}