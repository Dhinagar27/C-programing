#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<float.h>

int main(){

    printf("size of the int is %u and range is :%d and %d\n",sizeof(int),INT_MIN,INT_MIN);
    printf("size of the character is %u \n",sizeof(char));
    printf("size of the float is %u \n",sizeof(float));
    int a;
    scanf("%d", &a);
    return 0;

}  