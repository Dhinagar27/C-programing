/*  if statement 
 
    syntax

if (condition)
{
    statement;
}
else{
    statement;
}

*/
#include<stdio.h>

void main(){
     
     char name[100];
     int age ;
     printf("\nEnter your Name :");
     scanf("%s",name);
     printf("\nEnter the age : ");
     scanf("%d",&age);

     if(age>=18){
        
        printf("\n%s you are Eligible for vote!!",name);
     }
     else{

        printf("\n%s you are not Eligible for vote!!",name);
     }

}