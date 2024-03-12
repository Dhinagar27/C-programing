// recursion function in c programing
/*
recursion means repeating of a process
A function thats call itself is known as recursive function

*/
#include <stdio.h>

//function declaration
int factorial(int);
void main()
{
    int number ;
    printf("Enter the factorial number : ");
    scanf("%d",&number);
    printf("Factorial of the Number : %d",factorial(number)); //function calling 

}

//function definition
int factorial(int number)
{
    // it will run untill the number is = 1 
    if(number<=1)
    {
        return 1;
    }
    return number*factorial(number-1); //it call itself
}
