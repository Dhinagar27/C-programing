//arithmatic operations using pointers

#include<stdio.h>

void main(){

    int a = 20;
    int *p,*r;
    
    //address of a is stored in pointer variable p 
    p = &a;
    
    //r will return the address that are incremented by 4 (because the size 1 integer is 4)
    r = p + 1;
    
    //here it will print the size of the integer like size of a is = "4"
    printf("Size of integer : %d\n",sizeof(a));

    //return the address of the "a"
    printf("Value of P      : %d\n",p);
    
    //return the address that are incremented by 4 (r = p + 1)
    printf("Value of R      : %d\n",r);


}