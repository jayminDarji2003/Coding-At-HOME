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
    int num=10;
    int ans;
    ans=sum(num);
    printf("%d",ans);
    return 0;
}