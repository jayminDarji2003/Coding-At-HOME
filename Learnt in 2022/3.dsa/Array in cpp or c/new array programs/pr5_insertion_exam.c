// This is the example of insertion in array.
#include<stdio.h>

void disArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void insertion(int arr[],int size,int capacity,int ele,int index){
    if (size >= capacity)
    {
        printf("We can't insert element\n");
        exit(0);
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=ele;
    printf("Successfull insertion\n");    
}

int main(){
    int arr[7]={1,2,3,4,5};
    int capacity=sizeof(arr)/sizeof(int);
    int size=5,ele=7,index=3;

    disArray(arr,size);
    insertion(arr,size,capacity,ele,index);
    size +=1;
    disArray(arr,size);
    return 0;
}