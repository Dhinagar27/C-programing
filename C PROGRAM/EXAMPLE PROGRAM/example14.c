/*
find the given charater is vowels or not 
using switch case
*/

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%s",&ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':  
    case 'o':   
    case 'u':
    case 'A':
    case 'E':
    case 'I':  
    case 'O':   
    case 'U':
        printf("%c is the Vowel",ch);
        break;
    
    default:
        printf("This character is not a Vowel");
        break;
    }
}