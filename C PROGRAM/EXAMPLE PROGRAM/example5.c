// program for find area and perimeter of the rectangle and area and circumference of circle
/*
  formula 
  area of rectangle is "length * breadth"
  perimeter of rectangle is "2*(length + breadth)"
  area of circle "pi*r^2" 
  circumfeerence of circle is "2*pi*radius"

*/

#include<stdio.h>
#include<math.h>

void main(){

    float length,breadth,radius ; 
    printf("Enter the length and breadth : ");
    scanf("%f %f",&length,&breadth);
    printf("Enter the radius : ");
    scanf("%f",&radius);

    float area_of_rectangle = length*breadth;
    float perimeter_of_rectangle = (2*(length+breadth));
    float pi = 22/7;
    float area_of_circle = 3.14*(radius*radius);
    float circumference_of_circle = 2*3.14*radius;

    printf("The area and perimeter of rectangle : %.2f and %.2f\n",area_of_rectangle,perimeter_of_rectangle);
    printf("The area and circumference of circle : %.2f and %.2f ",area_of_circle,circumference_of_circle);




}