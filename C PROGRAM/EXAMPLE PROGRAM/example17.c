// In this program we use goto label for loop the condition for the n times

#include <stdio.h>
void main()
{
    int choice, i, total, Qty;
dhinagar:
    printf("MENU CARD\n\t1.COFFEE\n\t2.TEA\n\t3.COLD COFFEE\n\t4.MILK SHAKE\n");
    printf("Enter the choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("you have selected the COFFEE ");
        printf("\nEnter the Quanity :");
        scanf("%d", &Qty);
        total = total + (Qty * 20);
        break;
    case 2:
        printf("you have selected the TEA \n");
        printf("\nEnter the Quanity :");
        scanf("%d", &Qty);
        total = total + (Qty * 10);
        break;
    case 3:
        printf("you have selected the COLD COFFEE ");
        printf("\nEnter the Quanity :");
        scanf("%d", &Qty);
        total = total + (Qty * 30);
        break;
    case 4:
        printf("you have selected the MILK SHAKE ");
        printf("\nEnter the Quanity :");
        scanf("%d", &Qty);
        total = total + (Qty * 50);
        break;
    default:
        printf("Enter the correct choice !!!");
        break;
    }
    printf("\nEnter 1 if you want to continue or 0 to exit :");
    scanf("%d", &i);
    if (i == 1)
    {
        goto dhinagar;
    }
    if (i == 0)
    {
        printf("total amount : %d", total);
        printf("\nThank you Come again !!");
    }
}