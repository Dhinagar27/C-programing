#include<stdio.h>

void main(){
    
    int numbers;
    printf("Enter the numbers : ");
    scanf("%d",&numbers);
    int sum = 0;
    int first_digit,last_digit = 0;
   

        last_digit = numbers % 10;
        while (numbers >=10)
        {
             numbers = numbers/10; 
        }
        
    
    printf("The sum of the first and last number : %d",last_digit+numbers);
}