// reverse the number 



#include<stdio.h>

void main(){
    
    int numbers;
    printf("Enter the numbers : ");
    scanf("%d",&numbers);
    int sum = 0;
    int last_digit = 0;

    for(int i = 0 ; i <= sizeof(numbers) ; i++){

        last_digit = numbers % 10;
        sum = sum * 10 + last_digit;
        numbers = numbers/10;
        
    }
    printf("The reverse of the number is : %d",sum);
}