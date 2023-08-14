
// Array ADT program
// Program :- Create a program to make an array
#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tSize, int uSize)
{   //make like this
    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // (*a).ptr = (int *)malloc(tSize * sizeof(int));
    
    //using arrow operator
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void show(struct myArray *a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d \t",(a->ptr)[i]);
    }
    
}

void set_value(struct myArray *a){
    int n;
        //In this program we are first adding in "n" and then in array..
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d = ",i+1);
        scanf("%d",&n);
        ((a->ptr)[i]=n);
    }
}

int main()
{
    struct myArray marks;
    createArray(&marks, 10, 7);

    printf("we are running set value now \n");
    set_value(&marks);
    
    printf("\nwe are running show now \n");
    show(&marks);

    return 0;
}