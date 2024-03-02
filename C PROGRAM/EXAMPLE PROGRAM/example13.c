/*
find given number is odd or even
use % operator
*/
#include <stdio.h>
void main()
{
    int a;
    printf("Enter the integer : ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The given number is EVEN \n");
    }
    else if (a % 2 != 0)
        
    {
        printf("The given number is ODD  ");
    }
    else
    {
        printf("Enter the valid number !!!");
    }
}