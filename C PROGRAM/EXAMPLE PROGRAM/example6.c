/*
 "swapping"
     a += b;
     b = a - b;
     a -= b;

*/

#include<stdio.h>
 void main(){

     int a,b,c;
     printf("Enter the 2 numbers : ");
     scanf("%d %d",&a,&b);
     a += b;
     b = a - b;
     a -= b;
     printf("the swaped numbers are a = %d and b = %d",a,b);
 }