//pointers in c

#include<stdio.h>

void main(){

    int a = 10; //data variable
    int *p; //pointer variable

    p = &a; // address of a 

    // here the &a print the address of the variable "a"
    printf("value of a      : %d\n",a);
    printf("Address of a    : %d\n",&a);
    
     //here the p will return the address of the a stored in it 
     // &p will return the address of the p
    printf("value of P      : %d\n",p);
    printf("Address of p    : %d\n",&p);

    //by using the dereferenceing "*p" we can directly accessing the value in the adress stored in the p 
    printf("p dereferencing : %d",*p);



}