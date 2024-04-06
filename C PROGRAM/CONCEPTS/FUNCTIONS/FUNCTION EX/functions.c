//Functions
/*
set of codes that are enclosed with in the name and run amny time as we  need 

*/




#include<stdio.h>

//here this the function that we are write out the main function so we can call the function with the name of it
// like "add();"

void add(){
    
    int a,b,c;
    printf("Enter the number A :");
    scanf("%d",&a);
    printf("Enter the number B :");
    scanf("%d",&b);
    c = a + b;
    printf("The addition of the two number : %d ",c);
}
int main()
{
    add();
    return 0;
      
}
