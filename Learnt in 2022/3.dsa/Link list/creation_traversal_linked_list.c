// Here I am creating the linked list and traversal that.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void TraversalLinked(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    struct Node *Head, *Second, *Third;

    // Memory allocation in heap
    Head = (struct Node *)malloc(sizeof(struct Node));
    Second = (struct Node *)malloc(sizeof(struct Node));
    Third = (struct Node *)malloc(sizeof(struct Node));

    // Linked first to second and give value.
    Head->data = 7;
    Head->next = Second;

    // Linked second to third and give value.
    Second->data = 11;
    Second->next = Third;

    // Give value and Terminate the node.
    Third->data = 66;
    Third->next = NULL;

    TraversalLinked(Head);

    return 0;
}