/*
nested if statement
we can put if statement inside a another if statament


*/
#include <stdio.h>

void main()
{

    int year;
    printf("Enter the Year :");
    scanf("%d", &year);

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("The year is leap year ");
        }
        else
        {
            printf("The year is not a leap year");
        }
    }
    else
    {

        if (year % 4 == 0)
        {
            printf("The year is leap year  ");
        }
        else
        {
            printf("The is not a leap year");
        }
    }
}