#include <stdio.h>
#include <stdlib.h>

struct intro
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct intro *a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void setArray(struct intro *b)
{
    int n;
    for (int i = 0; i < (b->used_size); i++)
    {
        printf("Enter element %d = ", i + 1);
        scanf("%d", &n);
        (b->ptr)[i] = n;
    }
}

void disArray(struct intro *c)
{
    for (int i = 0; i < c->used_size; i++)
    {
        printf("%d \t",c->ptr[i]);
    }
}

int main()
{
    struct intro in;

    createArray(&in, 4, 2);

    printf("We are running set value now\n");
    setArray(&in);

    printf("We are running dis value now\n");
    disArray(&in);
    return 0;
}