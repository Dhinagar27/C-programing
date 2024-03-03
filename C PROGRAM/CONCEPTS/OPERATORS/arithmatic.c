/* arithmatic operater
   * / %  these three has the higher precedence
    + - and these have lower compared to above 
*/
 #include<stdio.h>
 void main(){
    
    //In this program we do arithmatic operation by getting the value from the use by useing "scanf" function
    int a,b,c;
    float x;
    printf("enter the 2 numbers:");
     
    //scanf function is used get the values from the user 
    scanf("%d %d",&a,&b);
    //here the "&" is used store the input value to the variable
    
    //addtion
    printf("add :%d\n",c = a+b);

    //mul
    printf("mul :%d\n",c = a*b);

     //difference
    printf("diff :%d\n",c = a-b);

    //if divide the value we get the qusent value 
     //division
     //in division if we want the accurate value we should declare correct "x"
     /*rathere then we declare it it will return the wrong value "x = a/b" so we should add the type convertion method her 
     for get the correct value like "x = (float)a/(float)b" this will div value and retrun in float*/
     //type convertion
    printf("div :%.2f\n",x = (float)a/(float)b); 

    //if we mod the given value we get the reminder value 
    //this also used to get the last digit of the given value 
     //modules
     
    printf("mob :%d\n",c = a%b);


  }