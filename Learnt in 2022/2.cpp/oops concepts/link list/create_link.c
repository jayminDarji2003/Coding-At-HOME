// Create linked list

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

    //Traversal the node..Means display the list
void LinkedListTraversal(struct Node *ptr)
{   
    printf("Display the all datas : \n");
    while (ptr != NULL)
    {
        printf("Element = %d \n", ptr->data);
        ptr = ptr->next;
    }
}

// Create link list

int main()
{
    struct Node *head, *second, *third;

    // Allocate memory for nodes in the linked list in Heap
    // This is dynamic memory allocation
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // link first and second node
    head->data = 7; // value
    head->next = second;

    // link second and third node
    second->data = 8; // value
    second->next = third;

    // Last node and then terminate
    third->data = 9; // value
    third->next = NULL;

    LinkedListTraversal(head);
    return 0;
}
