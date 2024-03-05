// ASCII american standard code for information interchange
/*

 128 total character which is used mostly during program
 total number of ascii characters are 256 (0 to 255)
 0 to 32 (total 32 character) is called as ascii control characters
 include 'escape ', 'backspace', 'delete'

 32 to 127 character is called as ascii printable character

 128 to 255 is called as the extended ascii codes


*/

#include <stdio.h>
void main()
{
    char a = 'a';
    for (int i = 0; i <= 255; i++)
    {
        printf("%d : %c\n",i, i);
    }
    // here the a-32 is used change small letter a to captial letter A 
    //97 = a and 65 = A
    // so 97 - 32 = 65
    printf("%c : %c",a,a-32);
}
/*
  
  48 - 57  = 0-9
  65 - 90  = A-Z
  97 - 122 = a-z
  32       = space


*/