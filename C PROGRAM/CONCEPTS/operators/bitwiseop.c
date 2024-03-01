//bitwise operators
//   AND & ,  OR | , XOR  ^ , NOT  ~, SHIFT LEFT <<,  SHIFT RIGHT >>

#include<stdio.h>

void main(){

      int a = 10 , b = 11 ;

      printf("\nBitwise AND : %d ",a&b);
      printf("\nBitwise OR : %d ",a|b);
      printf("\nBitwise NOT : %d",~a);
      printf("\nBitwise XOR : %d ",a^b);

      //left shift 
      int c = 16 ; 
      int d = c <<2 ;
      printf("\nleft shift : %d",d);

      //right shift 
      int e = c >> 2 ;
      printf("\nRight shift : %d",e);


}