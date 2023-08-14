
// Create singly link list then add data to the biggning and last and display the data

#include <stdio.h>
#include <stdlib.h>
// Creating a node..
struct node
{
    int data;
    struct node *next;
} *START = NULL;

// Function declaration..
void createList(int);
void display(void);
void addFirst(int);

int main()
{
    int ch, num;
    do
    {
        printf("\n 1.Create a list. ");
        printf("\n 2.Display the list. ");
        printf("\n 3.Add data to first. ");
        printf("\n 4.Exit. ");
        printf("\n Enter your choice. ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n Enter any number:");
            scanf("%d", &num);
            createList(num);
            break;
        case 2:
            display();
            break;
        case 3:
            printf("\n Enter any number: ");
            scanf("%d", &num);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice..");
            break;
        }

    } while (1);
    return 0;
}

void createList(int num)
{
    struct node *q, *temp;
    if (START == NULL)
    {
        START = (struct node *)malloc(sizeof(struct node));
        START->data = num;
        START->next = NULL;
    }
    else
    {
        q = START;
        while (q->next != NULL)
        {
            q = q->next;
        }
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = num;
        temp->next = NULL;
        q->next = temp;
    }
}

void display()
{
    struct node *q;
    for (q = START; q != NULL; q = q->next)
    {
        printf("%d\t", q->data);
    }
}

void addFirst(int num)
{
    struct node *temp, *q;
    q = START;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->next=q;
    START=temp;
}