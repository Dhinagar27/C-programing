// find the largest number in the array

#include<stdio.h>
void main(){
    int n,a[100];
    printf("Enter the limit : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the array elements : ");
        scanf("%d",&a[i]);
    }
    
    //for finding the largest element in the array we should first initialy fix the max value like below
    int max = a[0];


    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
    }
    
     printf("Max value : %d",max);
    
    
    
}
