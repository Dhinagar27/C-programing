//with argument function
#include<stdio.h>

//function decaration
int add(int, int);

int main()
{
   int a,b;
   printf("Enter the number A :");
   scanf("%d",&a);
   printf("Enter the number B : ");
   scanf("%d",&b);
   int result;
   //function calling 
   result = add(a,b);  //actual parameters
   printf("The addition of the number : %d",add(a,b)); 
}

//function definition
int add(int a,int b) //formal parameters
{
    int c;
    c = a + b;
    return c;
}