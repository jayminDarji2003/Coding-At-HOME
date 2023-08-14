// Write program to impliment singly linked list
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL, *ptr;

int main()
{
    int ch, value, ele;

    printf("-------Menu-------\n");
    printf("1.Insert at the beginning\n");
    printf("2.Insert at the end\n");
    printf("3.Insert at specific position\n");
    printf("4.Delete from beginning\n");
    printf("5.Delete at the end\n");
    printf("6.Delete from specific position\n");
    printf("7.Exit\n");
    printf("-------------------------\n");

    while (1)
    {
        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n Enter the value : ");
            scanf("%d", &value);
            insertAtFirst(value);
            display();
            break;
        case 2:
            printf("\nEnter the value : ");
            scanf("%d",&value);
            insertAtEnd(value);
            display();
            break;
        case 3:
            printf("\nEnter the value : ");
            scanf("%d",&value);
            printf("\nEnter the position : ");
            scanf("%d",&ele);
            insertAtIndex(value,ele);
            display();
            break;
        case 4:
            deleteAtFirst();
            display();
            break;
        case 5:
            deleteAtEnd();
            display();
            break;
        case 6:
            printf("\nEnter the element you want to delete : ");
            scanf("%d",&ele);
            deleteAtIndex(ele);
            display();
            break;
        case 7: 
            exit(0);
            break;

        default:
            printf("\nWrong choice");
            break;
        }
    }

    return 0;
}