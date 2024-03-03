#include<stdio.h>
void main(){

    //here "a" is variable name and 10 is value is stored in the a 
    //we can diclare any type of data by thier data type like char float etc..
    //one variable name canot be used many time only one time it will be used

    int a = 10;
    char b = '&';
    
    //literal example 
    float c = 2.5;
    // if we declare a variable like this it whould be take as a "double data type ".
    float c = 2.5f;
    // if we include the "f" floating literal in here it whould be taken as float.
    // it can be used for int etc...

    /*if we give 0 before the value in would be taken as the actual value */
    int ab = 012;

    /*if we want to give a hexadecimal value we can  add a 'x' in the value  */
    int ac = 0x42;
    // it will retrun the capital letter b because the hexadecimal value for the value is 66

    printf("%d \n %c \n %f \n %d  \n %d",a,b,c,ab,ac);

}