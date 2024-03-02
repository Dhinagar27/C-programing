/*
find the given number is amstrong number or not

for example the number is 123 the cube of this three number and sum of those is equal to the given number
*/

#include <stdio.h>
void main()
{
    int number ,original_number;
    printf("Enter the Number : ");
    scanf("%d", &number); // 123
    original_number = number;
    int sum = 0;
    int last_digit;
    int cube;
    for (int i = 0; i <= sizeof(number); i++)
    {
        last_digit = number % 10;                    // 3
        cube = last_digit * last_digit * last_digit; // 27
        sum = sum + cube;                            // 27
        number = number / 10;                        // 12
    }
    printf("The sum : %d\n", sum);

    if (sum == original_number)
    {
        printf("The given number is AMSTRONG !!!");
    }
    else
    {
        printf("The given number is not AMSTRONG !!!");
    }
}