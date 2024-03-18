//enumeration or enum in c
/*
it is a user defined data type
we can asign a  "value" to a "name "

if enum is used inside a main function it scope will be "local" used inside the main function
if used out side it scope will be "global"

*/

#include<stdio.h>

// here the two parameters inside the {} asign to the no = 0 and yes = 1 by default and we can asign as we like
// add = 10 and sub = 20
enum Bool{no,yes};

enum num{add = 10,sub = 20};

int main(){
    
    
    enum week{sun,mon,tue,wed,thur,fri,sat}days;
    days = wed;
    printf("WED IN WEEK : %d\n",days);

    enum Bool a;
    a = yes;
    printf("A : %d\n",a);

    enum num b;
    b = sub;
    printf ("B : %d\n",b);
    
    // here if we not asign the value to the "y" it will incremented by "1" with the "x" value in the previous
    enum point {x = 10,y}points;
    points = y;
    printf("The value of the Y : %d",points);

     
}