/*
tea shop management

write the program for the following output using switch case

 MENU CARD
   1.COFFEE
   2.TEA
   3.COLD COFFEE
   4.MILK SHAKE

   enter the choice : 2

   you have selected the TEA
   Enter the Quantity : 5
   Total amount : 50

*/
#include <stdio.h>
void main()
{
    int choice;
    printf("MENU CARD\n\t1.COFFEE\n\t2.TEA\n\t3.COLD COFFEE\n\t4.MILK SHAKE\n");
    printf("Enter the choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("you have selected the COFFEE ");
        int equantity;
        printf("\nEnter the Quanity :");
        scanf("%d", &equantity);
        printf("Total amount : %d", equantity * 20);
        break;
    case 2:
        printf("you have selected the TEA \n");
        int tquantity;
        printf("\nEnter the Quanity :");
        scanf("%d", &tquantity);
        printf("Total amount : %d", tquantity * 10);
        break;
    case 3:
        printf("you have selected the COLD COFFEE ");
        int cquantity;
        printf("\nEnter the Quanity :");
        scanf("%d", &cquantity);
        printf("Total amount : %d", cquantity * 30);
        break;
    case 4:
        printf("you have selected the MILK SHAKE ");
        int mquantity;
        printf("\nEnter the Quanity :");
        scanf("%d", &mquantity);
        printf("Total amount : %d", mquantity * 50);
        break;
    default:
        printf("Enter the correct choice !!!");
        break;
    }
}