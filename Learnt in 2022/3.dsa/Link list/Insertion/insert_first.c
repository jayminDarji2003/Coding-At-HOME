// Program:-Insert at first

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void disLinkedList(struct Node *ptr)
{
    printf("Display Linked List\n");
    while (ptr != NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// Insert at first function
struct Node * insertFirst(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;

    return ptr;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 77;
    third->next = NULL;

    disLinkedList(head);
    head=insertFirst(head,78);
    disLinkedList(head);

    return 0;
}