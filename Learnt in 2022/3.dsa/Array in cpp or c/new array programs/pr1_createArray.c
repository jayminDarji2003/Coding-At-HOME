// Create an arry using structure.

#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void SetValue(struct myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d",&n);
        ((a->ptr)[i]=n);

            //second way
        // scanf("%d",&(a->ptr)[i]);
    }
    // printf("SetValue function is over\n");
}

void Show(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d \t ", (a->ptr)[i]);
    }
}

int main()
{
    struct myArray marks;

    createArray(&marks, 10, 4);

    printf("we are running set value now \n");
    SetValue(&marks);

    printf("we are running show value now \n");    
    Show(&marks);
    return 0;
}



