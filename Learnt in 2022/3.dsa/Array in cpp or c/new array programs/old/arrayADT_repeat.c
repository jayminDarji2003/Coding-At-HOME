
// This is the repeat program of the Array ADT.

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
    a->ptr = (int *)malloc(a->used_size * sizeof(int));
}

void setValue(struct myArray *a)
{
    // int n;
    // In this program we are direcly adding in array..
    for (int i = 0; i < a->used_size; i++)
    {

        printf("Enter the elements %d = ", i + 1);
        scanf("%d", &((a->ptr)[i]));
        // (a->ptr[i] = n);
    }
}

void printArray(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d \t ", a->ptr[i]);
    }
}
int main()
{
    struct myArray marks;
    createArray(&marks, 10, 5);

    printf("We are running set value now \n");
    setValue(&marks);

    printf("We are running display value now \n");
    printArray(&marks);
    return 0;
}
