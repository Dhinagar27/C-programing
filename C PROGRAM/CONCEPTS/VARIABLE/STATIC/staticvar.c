//static varaiable in c

#include<stdio.h>

void stat();//function declaration

void main(){

    stat();//function calling
    stat();

}

//function definition
void stat()
{
    static int a = 1; 
    /*

    here the static variable is used to update the value in the variable

    for example here the a value is "1" and then get incremented and change to "a = 2"
    now the a value will be "2"
    by calling this fuction in main function as many times it will show the a value is 2

    by using the "static variable " first we call the fucntion "a" value will be 2 and 
    next will be "a = 3" because we using the static variable 
    */
    a++; 
    printf("a : %d\n",a);
}