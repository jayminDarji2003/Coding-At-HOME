// Write a program to take second a find hour and munutes
#include<stdio.h>

int main(){
    int second;
    int hour,  minutes;
    printf("Enter seconds : ");
    scanf("%d",&second);
    hour=second/3600;
    second=second%3600;
    minutes=second/60;
    second=second%60;
    printf("%d : %d : %d",hour,minutes,second);
    return 0;
}