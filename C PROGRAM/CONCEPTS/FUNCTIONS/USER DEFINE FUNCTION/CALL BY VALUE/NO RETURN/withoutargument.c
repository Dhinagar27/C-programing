// no return without argument function in c
/*
three important things to remember

  1.function declaration
  2.function definition
  3.function calling

*/

#include <stdio.h>

// no return means the return_type of a function must be "void"
// function declaration
void add();

int main()
{
    // function calling
    add();
    return 0;
}


// function definition
void add()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("the additon of the two number : %d",a+b);
}