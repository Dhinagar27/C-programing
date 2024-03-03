//logical operator
// && , || , !

#include<stdio.h>

void main(){

    //it will used when we use more than one condision

    // && logical AND ture when all condition is ture
    // || logical OR ture when one of the condition is ture
    // ! it will give the oppsite the given one 

    //condition >= 35 and(&&) <=100
    int a = 85 ;
    
    printf("Logical AND : %d",(a>=35 && a<=100));
    printf("\nLogical OR: %d",(a>=35 || a<=100));
    printf("\nLogical not: %d",!(a>=35));

}