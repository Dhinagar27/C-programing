/*
switch case
*/

#include <stdio.h>

void main()
{
    int ch;
    printf("Enter the number : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    default:
        printf("Enter the correct number!!");
        break;
    }
}