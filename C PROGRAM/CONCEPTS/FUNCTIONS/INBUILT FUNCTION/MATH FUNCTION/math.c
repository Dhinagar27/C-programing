// math function
/*

for string function we should use the (string.h) header file
for math function we should use the (math.h) header file

*/

#include <stdio.h>
#include <math.h>

void main()
{
    float number;
    printf("Enter the number : ");
    scanf("%f",&number);

    // Square root function
    //here we give only one parameter in inside the function "number"
    //it must be float date type
    printf("The square root of the given numer : %.2f\n",sqrt(number)); //sqrt(number)

    int power;
    printf("enter the power value : ");
    scanf("%d",&power); 

    //power function
    //here we want to give two parameter inside the function "pow(para 1,para 2)"
    //float data type
    printf("The power of the given value : %.2f\n",pow(number,power)); //pow(number,power)

    //absolute function 
    //it will convert the negative number to positive number
    //int date type
    printf("The abs of the given number : %d\n",abs(50)); //abs(50)

    //ceil function
    //nearest larger number 
    //float data type
    printf("The ceil of the given number : %f\n",ceil(3.8)); //ceil(3.8)
    printf("The ceil of the given number : %f\n",ceil(3.2));

    //floor function
    //nearest smaller number  
    //float data type 
    printf("The floor of the given number : %f\n",floor(3.8)); //floor(3.8)
    printf("The floor of the given number : %f\n",floor(3.2));

    //round function 
    // if the "." after number is greater than 5 it will round off to larger number 
    //if it is small it will be round off to smaller number
    printf("The round of the given number : %f\n",round(3.8)); //round(3.8)
    printf("The round of the given number : %f\n",round(3.2));


}