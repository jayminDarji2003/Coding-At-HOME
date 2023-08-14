    // This is the repeat program of (creation_traversal_linked_list.c)
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*first,*second,*third;

void disLinkedList(struct node *ptr){
    while (ptr!=NULL)
    {
        printf("element is : %d\n",ptr->data);
        ptr=ptr->next;
    }
    
}

int main(){
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    first->data=7;
    first->next=second;

    second->data=11;
    second->next=third;

    third->data=66;
    third->next=NULL;

    disLinkedList(first);
    return 0;
}