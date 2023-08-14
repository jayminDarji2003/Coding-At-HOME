#include<stdio.h>

char stack[10];
int top=-1;

void push(char ele){
    stack[++top]=ele;
}
char pop(){
    return (stack[top--]);
}

int py(char symbol){
    if (symbol == '^')
    {
        return (3);
    }
    else if(symbol == '*' || symbol == '/'){
        return (2);
    }
    else if(symbol == '+' || symbol == '-'){
        return (1);
    }
    else{
        return 0;
    }
    
}

int main(){
    
    return 0;
}