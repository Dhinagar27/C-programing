//array values handled by the pointers in c

#include<stdio.h>

void main(){

    int a[] = {10,20,30,40,50}; //static array
    int *p; //pointer variable

    p = &a; //address of "a" stored in pointer variable "p"

    printf("Size of the integer   : %d\n",sizeof(int)); // 4

    printf("Size of the array A   : %d\n",sizeof(a)); //20

    printf("length of the array A : %d\n",sizeof(a)/sizeof(int)); //5

    //in here the address of the array will be started at first element 
    printf("Address of array A    : %d\n",&a);

    printf("Value of P            : %d\n",p);

    p++; //here increment the pointer variable so we can access the remaining elements in array

    printf("Values of P++         : %d\n",p);
    printf("Values of *P          : %d\n",*p); // by using dereferencing we can access the valuse in the address

    //here the pointer variable will be incremented first and go for the value in those address
    printf("Value of *++p         : %d\n",*++p);
 
    //here it will go for the value and get incremented
    printf("Value of ++*p         : %d\n",++*p);

}