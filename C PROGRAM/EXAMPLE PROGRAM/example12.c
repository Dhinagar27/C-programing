/*
A library charges a fine for every book returned late
for first 5 days is 50 paise
for 6-10 days is 1 rupee
above 10 fine is 5 rupees
after 30 days membership is canceled

*/

#include <stdio.h>
void main()
{
    int days;
    printf("Enter the days you are late to return the books :");
    scanf("%d", &days);
    if (days >= 1 && days <= 5)
    {
        printf("Your fine is 50 paise !\n");
    }
    else if (days <= 6 || 10 >= days)
    {
        printf("Your fine is 1 rupee !\n");
    }
    else if (days > 10 && days <= 30)
    {
        printf("Your fine is 5 rupee !");
    }
    else if (days > 30)
    {
        printf("Your Membership is cancelled !");
    }
}