/*
 the program for student total marks and 
 the avg or percentage of those marks
*/

#include<stdio.h>

void main(){

    int s1,s2,s3,s4,s5;
    printf("Enter the marks of five subjects :");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    int total = s1+s2+s3+s4+s5 ;
    printf("Total mark abtained by the Student : %d\n",total);
    printf("Percentage of the mark : %.2f",(float)total/5.0);

}