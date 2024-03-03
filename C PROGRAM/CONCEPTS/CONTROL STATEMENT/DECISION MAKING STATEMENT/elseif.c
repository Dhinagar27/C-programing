/*
else if statement

    syntax

if (condition)
{
    statement;
}
elseif{
    statement;
}
else
{
    statement
}
*/

#include<stdio.h>

void main(){

    int number;
    printf("Enter the number : ");
    scanf("%d",&number);

    if(number>0){
        printf("The number is positive "); 
    }
    else if(number == 0)
    {
        printf("The number is Zero");
    }
    else {
        printf("The number is negative");
    }
}