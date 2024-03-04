//nested for loop
/*
 for printing the pattern program 

 for  the rows use"outer loop" like "i"
 for the column use "inner loop" like "j"

 for this j is dependent to the i

*/




#include<stdio.h>
void main(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    
    }  
    printf("-------------------------------------------------------------------\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    
    } 
     printf("-------------------------------------------------------------------\n");
      for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    
    } 
}