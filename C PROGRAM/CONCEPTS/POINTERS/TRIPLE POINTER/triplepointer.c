//triple pointer in c 


#include<stdio.h>

void main(){

    int a = 10; //data variable
    int *p; //pointer variable
    int **q; // double pointer
    int ***r; //triple pointer

    p = &a; // address of a 

    // here the &a print the address of the variable "a"
    printf("value of a         : %d\n",a);
    printf("Address of a       : %d\n",&a);
    
     //here the p will return the address of the a stored in it 
     // &p will return the address of the p
    printf("value of P         : %d\n",p);
    printf("Address of p       : %d\n",&p);

    //by using the dereferenceing "*p" we can directly accessing the value in the adress stored in the p 
    printf("*p dereferencing   : %d\n",*p);

    printf("--------------------------------------------------------------------\n");

    //here we are storing the address of the p pointer in to another pointer q by using double pointer "**q"
    q = &p;

    printf("value of p         : %d\n",p);
    printf("Address of p       : %d\n",&p);
    
    printf("value of q         : %d\n",q);
    printf("Address of q       : %d\n",&q);


    printf("**q dereferencing  : %d\n",**q);

    printf("--------------------------------------------------------------------\n");

    //here we are storing the address of the q pointer in to another r pointer by using double pointer "***r"
    r = &q;

    printf("value of q         : %d\n",q);
    printf("Address of q       : %d\n",&q);
    
    printf("value of r         : %d\n",r);
    printf("Address of r       : %d\n",&r);


    printf("***r dereferencing : %d\n",***r);

    printf("--------------------------------------------------------------------\n");

    

}
