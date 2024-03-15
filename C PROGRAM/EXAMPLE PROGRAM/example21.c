// check the given two array are same or not 

#include<stdio.h>
void main(){
    int n,a[100],b[100];

    printf("Enter the limit : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the a[%d] Element : ",i);
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the b[%d] Element : ",i);
        scanf("%d",&b[i]);
    }

    int same = 1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            same = 0;
            break;
        }

    }
    if(same)
    {
        printf("The two array are same !!");
    }
    else
    {
        printf("The two array are not same !!");
    }

}