//Program to find the given year is leap year or not 

#include<stdio.h>

void main(){

    int year;
    printf("Enter the Year :");
    scanf("%d",&year);

    if(year % 100 == 0)
    {
        if(year % 400 == 0){
            printf("The year is leap year ");
        }
        else{
            printf("The year is not a leap year");
        }
    }
    else{
        
        if(year % 4 == 0 )
    {
        printf("The year is leap year  ");
    }
    else{
        printf("The is not a leap year");
    }
    }
}
