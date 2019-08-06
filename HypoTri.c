#include<stdio.h>
#include<math.h>

int main(){

  int b,h,a;


  printf("Enter the Height of Triangle: \n");
  scanf("%d", &h);
  printf("Enter the Base of Triangle: \n");
  scanf("%d", &b);

  a=(b*b)+(h*h);
  a=sqrt(a);

  printf("The Hypotenuse of the triangle is %d", a);




}
