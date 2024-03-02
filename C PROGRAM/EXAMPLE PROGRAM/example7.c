/*
  sum of the number given
  
   int last_digit = numbers % 10;
   sum = sum + last_digit;
   numbers = numbers/10;
*/
#include<stdio.h>

void main(){
    
    int numbers;
    printf("Enter the numbers : ");
    scanf("%d",&numbers);
    int sum = 0;

    for(int i = 0 ; i <= sizeof(numbers) ; i++){

        int last_digit = numbers % 10;
        sum = sum + last_digit;
        numbers = numbers/10;
        
    }
    printf("The sum of the given number : %d",sum);
}