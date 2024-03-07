// string
/*
for string we should use the double "" for store the values , "char c[100] = {'r','a','m'};"
we to want perform any string function we should inclube string libray #include<string.h>

*/
#include <stdio.h>
#include<string.h>
void main()
{
    // this is used to store the single character
    char a = 'a';

    //string must be end with the \0
    char b [] = {'r','a','m','\0'};


    // in here this is used to store the group of characteres..
    char c[100];
    printf("Enter the string a:");

    // if we enter the space as the input it wont take it (ram kumar) it will take the "kumar " as the second input
    scanf("%s", c);

    // if we want to give the space as the input we can use the "gets" function
    // gets means get string it will take space as the input
    char b[100];
    printf("Enter the string b :");
    gets(b);
    printf("string a : %s\n", c);
    printf("The first letter of the string : %c\n", c[0]);
    printf("string b : %s", b);

    //
}
