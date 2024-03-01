/*ramesh salary intput
  dearness allowance is 40%
  house rent allowance is 20%
  find gross salary
*/ 
#include<stdio.h>

 void main(){

    float ramesh_salary;
    printf("Enter the Salary:");
    scanf("%f",&ramesh_salary);
    float DA = (40*ramesh_salary)/100;
    float HRA = (10*ramesh_salary)/100;
    printf("The DA is : %f \n",DA);
    printf("The HRA is : %f \n",HRA);
    printf("Gross Salary : %f ",ramesh_salary+DA+HRA);

 }


