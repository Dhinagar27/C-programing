//global variable in c 

#include<stdio.h>

void add(int);// function declaration

//here the variable is decalared globaly so it can be used any where in the program
int a = 10;

void main(){
    
    printf("The number : %d\n",a);
    add(a); // function calling
}

//funciton definition
void add(int a)
{

    a++;
    printf("The number : %d",a);
    
}
