// This is the program of switch case
#include <stdio.h>

int main()
{
    int ch;
    do
    {
        printf("\tMenu\n");
        printf("1.Monday\n");
        printf("2.Tuesday\n");
        printf("3.Wednesday\n");
        printf("4.Thursday\n");
        printf("5.Friday\n");
        printf("6.Satursay\n");
        printf("7.Sunday\n\n");

        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("It's Monday\n\n");
            break;
        case 2:
            printf("It's Tuesday\n\n");
            break;
        case 3:
            printf("It's Wednesday\n\n");
            break;
        case 4:
            printf("It's Thursday\n\n");
            break;
        case 5:
            printf("It's Friday\n\n");
            break;
        case 6:
            printf("It's Saturday\n\n");
            break;
        case 7:
            printf("It's Sunday\n\n");
            break;

        default:
            printf("Invalid choice\n\n");
            break;
        }
    } while (1);

    return 0;
}