// This is the program where we see which number is positive and which number is nagative
#include<stdio.h>

int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);

    if (num<0)
    {
        printf("The number is nagative\n");
    }
    else if(num>0){
        printf("The number is positive\n");
    }
    else{
        printf("The number is 0");
    }
    
    return 0;
}