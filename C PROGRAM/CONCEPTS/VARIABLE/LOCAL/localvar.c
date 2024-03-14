// local variable in c 
 

#include<stdio.h>
void main(){

    // here the varaiable i is  localy decalarded inside the for loop it cannot be used out side the for loop
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",i);
    }

    // it will show  error because i decalared inside the  for loop
     //printf("%d\n",i);
    
}