//  Fahrenheit to Celsius 
/* formula for Fahrenheit to Celsius

  c = (f-32)*5/9

*/
/* also formula for celsius to fahrenhit

  f = c*9/5+32

*/
#include<stdio.h>

void main(){

    float f;
    printf("Enter the Fahrenheit:");
    scanf("%f",&f);

    //formula for finding celsius
    float celsius;
    celsius = (f-32)*5/9;
    printf("The Celsius : %.2f",celsius);

}