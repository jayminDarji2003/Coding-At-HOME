// Deletion the first node
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
        printf("%d\t", ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

struct Node * deleteAtFirst(struct Node *head){
    struct Node *ptr=head;
    head=head->next;
    free(ptr);

    return head;
}

int main()
{
    struct Node *Head, *Second, *Third;
    Head = (struct Node *)malloc(sizeof(struct Node));
    Second = (struct Node *)malloc(sizeof(struct Node));
    Third = (struct Node *)malloc(sizeof(struct Node));

    Head->data = 7;
    Head->next = Second;

    Second->data = 11;
    Second->next = Third;

    Third->data = 66;
    Third->next = NULL;

    printf("Linked list before deletion\n");
    TraversalLinked(Head);

    Head=deleteAtFirst(Head);

    printf("Linked list after deletion\n");
    TraversalLinked(Head);


    return 0;
}