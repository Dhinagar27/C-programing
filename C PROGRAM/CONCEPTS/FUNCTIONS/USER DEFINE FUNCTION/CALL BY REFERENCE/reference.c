//call by reference function in c programing

#include<stdio.h>

// function declaration 
int swap(int *a ,int *b);

int main(){

    int a,b;
    printf("Enter the value of A :");
    scanf("%d",&a);
    printf("Enter the value of B :");
    scanf("%d",&b);

    //here we are printing the value before swaping
    printf("Before swap A : %d | B : %d\n",a,b); 

    swap(&a,&b);//function call

    //after the function call the values have been swapped
    printf("After swap A : %d | B : %d\n",a,b);
}

//function definition
int swap(int *a,int *b ){

    // here we use the temp variable for store the value in the a address
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
}

  