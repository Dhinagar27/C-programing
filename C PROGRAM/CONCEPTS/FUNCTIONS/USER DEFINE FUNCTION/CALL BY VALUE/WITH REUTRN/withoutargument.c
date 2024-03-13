// return without argument function in c
/*
three important things to remember

  1.function declaration
  2.function definition
  3.function calling

*/

#include <stdio.h>

// return means the return_type of a function must be "int"
// function declaration
int add();

int main()
{
    // function calling
    printf("The addition of the two numbers : %d ",add());
    return 0;
}


// function definition
int add()
{
    int a,b;
    printf("Enter the two numbers :");
    scanf("%d %d",&a,&b);
    int c = a + b;
    return c;

    
}