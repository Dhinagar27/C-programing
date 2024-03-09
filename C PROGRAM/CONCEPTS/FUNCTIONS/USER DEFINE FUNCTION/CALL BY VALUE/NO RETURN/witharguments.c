// no return with argument function in c
/*
three important things to remember

  1.function declaration
  2.function definition
  3.function calling

*/
/*
if we declare the variable as local we use many time any where in the program

*/

#include <stdio.h>

// no return means the return_type of a function must be "void"
// function declaration 
void add(int ,int); //in declaration we must give type of the argumnet that we are passsing 

int main()
{
    // function calling  
    int num1,num2;
    printf("Enter the Number 1 : ");
    scanf("%d",&num1);
    printf("Enter the Number 2  : ");
    scanf("%d",&num2);
    add(num1,num2); //actual parameters 
    return 0;
}


// function definition
void add(int num1,int num2) //formal parameters 
{
   int c = num1 + num2;
   printf("The Addtion of the values from the main function : %d",c);
}