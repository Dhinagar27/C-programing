#include<stdio.h>

void main(){

    int a[100],b[100];
    int n;
    printf("Enter the limit : ");
    scanf("%d",&n);


    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter b[%d] : ",i);
        scanf("%d",&b[i]);
    }
    int same = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] == b[i]){
            same++;
        }
       
    }
    if(same == n)
    {
       printf("SAME");
    }
    else
    {
        printf("NOT SAME");
    }
    
}