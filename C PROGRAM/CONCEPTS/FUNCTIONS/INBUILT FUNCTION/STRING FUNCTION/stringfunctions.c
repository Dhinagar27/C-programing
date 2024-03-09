// string functions
// if we want to use the string function we should include the string library

#include <stdio.h>
#include <string.h>

void main()
{
    char a[100], b[100], c[100];

    printf("Enter the string :");
    gets(a);

    printf("Enter the second string :");
    gets(b);

    printf("The given string : %s\n", a);

    // if the return value is "0" it is equal if " 1 and -1 " it is not equal
    printf("Comparison of the two strings : %d\n", strcmp(a, b)); // strcmp

    // it will copy the second string to the third string
    printf("The second string is copied to third string : %s \n", strcpy(c, a)); // strcpy(distination,source)
    printf("The third string : %s\n", c);

    // it will give the length of the string
    printf("The length of the given string a : %d\n", strlen(a)); // strlen

    // it will return the first letter of the string
    printf("The first letter of the string a : %c\n", a[0]);

    // it will return the last letter of the string
    printf("The last letter of the string  a : %c\n", a[strlen(a) - 1]);

    // it will change the given letter to upper case
    printf("The upper case of the string a : %s\n", strupr(a)); // strupr

    // it will change the given letter to lower case
    printf("The lower case of the string  a : %s\n", strlwr(a)); // strlwr

    // it will reverse the given string
    printf("The reverse of the given string a : %s\n", strrev(a)); // strrev

    // it will add the two string
    //  if we concadinate the two string it will in the first variable "a"
    printf("concadination of the given strings : %s\n", strcat(a, b)); // strcat
}