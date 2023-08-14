#include<stdio.h>

void deletion(int arr[],int size,int index){
    if (index > size){
        printf("Wrong index\n");
        exit(0);
    }
    for (int i = index; i < size-1; i++){
        arr[i]=arr[i+1];
    }
}
void display(int arr[],int size){
    for (int i = 0; i < size; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[5]={1,2,3,4};
    int index=2;
    int size=sizeof(arr)/sizeof(int);

    display(arr,size);
    deletion(arr,size,index);
    size-=1;
    display(arr,size);
    return 0;
}