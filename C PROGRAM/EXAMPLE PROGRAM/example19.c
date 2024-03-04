// sum the given numbers using for and continue statement

#include <stdio.h>
void main()
{
    int n, num, sum = 0;
    printf("Enter the limits : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("\nEnter the number :");
        scanf("%d", &num);
        if (num == 0)
            continue;
        sum += num;
    }
    printf("\nThe sum : %d", sum);
}