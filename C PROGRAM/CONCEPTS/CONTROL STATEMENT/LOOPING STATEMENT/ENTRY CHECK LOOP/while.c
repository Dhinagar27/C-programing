// while loop
/*In while loop we wil first declare the variable and check the condition in loop and increment and decrement
will place inside  the loop
we will use the while loop when we not know the lenght of the loop

this is the "entry check loop"

*/
/*

In while loop we have to check the three thing 
 1.initialization
 2.condition checking
 3.increment or decrement

*/

#include <stdio.h>
void main()
{
    int i, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
}