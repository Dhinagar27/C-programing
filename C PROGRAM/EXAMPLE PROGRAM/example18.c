// print the numbers from 1 to n using the "goto statement"

#include <stdio.h>
void main()
{
    int n,number = 0;
    printf("\nEnter the range of the numbers to print :");
    scanf("%d",&n);
dhinagar:
    printf("\n%d", number);
    number++;
    if (number != n+1)
    {
        goto dhinagar;
    }
}