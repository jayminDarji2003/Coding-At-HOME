#include<stdio.h>

int sum(int n){
    if (n != 0)
    {
        return (n + sum(n-1));
    }
    else{
        return n;
    }
    
}

int main(){

    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("The sum of %d natutal no is %d",num,sum(num));
    return 0;
}