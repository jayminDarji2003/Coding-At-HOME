// Insert at the end repeat program
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
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// Insert after a node
struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;

    ptr->next=prevNode->next;
    prevNode->next=ptr;

    return head;
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
    head= insertAfterNode(head,second,656);
    disLinkedList(head);
    return 0;
}

