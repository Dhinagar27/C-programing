// increment and decrement operator
// increment  ++ , decrement --

#include<stdio.h>

void main(){
    
    int a = 1;

    printf("pre increment            : %d", ++a);
    printf("\npost increment           : %d", a++);
    printf("\nAfter the post increment : %d",a); // 3
    printf("\npre decrement           : %d", --a);
    printf("\npost decrement           : %d", a--);
    printf("\nAfter the post decrement : %d",a); // 1

}