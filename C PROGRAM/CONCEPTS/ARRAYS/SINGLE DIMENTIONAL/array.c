//single dimentional arrays
/*

for example if we use this "int a = 10;" we store only one value 
for storing multi value we are going for the array concept 
syntax :

  data_type variable_name[array_size];

if we want to access the array value we use the index position of the vlaue stored in the array
here array must be start at 0 index
if we declare the array as integer we give the values as the integer


*/
#include<stdio.h>
void main(){
    int a[100],n;
    printf("Enter the limit : ");
    scanf("%d",&n);

    //this for loop is used for get numbers from the user and store it in the array
    for (int i = 0; i < n; i++)
    {
      printf("Enter the numbers : ");
      scanf("%d",&a[i]);
    }

    //this for loop is used for printing the array elements
    for (int i = 0; i < n; i++)
    {
      printf("Values in the array : %d\n",a[i]);

    }
    
}
