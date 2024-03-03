/*
conditional operator statement

    syntax
condtion ? true statement : false statement;

*/
// when we use single condition we can use this opeerator statement

#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the values of A and B :");
    scanf("%d %d", &a, &b);
    c = a > b ? a : b;
    printf("The greater number is %d", c);
}
