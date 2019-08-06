#include<stdio.h>

int square(){
  int b;

  printf("Enter the Side of Square: \n");
  scanf("%d", &b);

  b=b*b;

  printf("The area of the Square is %d", b);


}

int rec(){

  int b,h,a;

  printf("Enter the Length of Rectangle: \n");
  scanf("%d", &h);
  printf("Enter the Breadth of Rectangle: \n");
  scanf("%d", &b);

  a=b*h;
  printf("The area of the Rectangle is %d", a);


}

int tri(){

  int b,h,a;

  printf("Enter the Height of Triangle: \n");
  scanf("%d", &h);
  printf("Enter the Base of Triangle: \n");
  scanf("%d", &b);

  a=(b*h)/2;
  printf("The area of the triangle is %d", a);


}

int cir(){

  int b;

  printf("Enter the Radius of Sphere: \n");
  scanf("%d", &b);

  b=(3.14)*(b*b);

  printf("The area of the Circle is %d", b);


}

int sphere(){

  int a,b;

  printf("Enter the Radius of Sphere: \n");
  scanf("%d", &b);

  a = (b*b)*4*(3.14);

  printf("The area of the Sphere is %d", a);



}

int main(){
  int q;
  printf("Choose Any of the following\n");
  printf("1 - Area of Square\n2 - Area of Rectangle\n3 - Area of Triangle\n4 - Area of Circle\n5 - Area of Sphere\n");
  scanf(" %d", &q);
  if(q==1){
    square();
  }
  if(q==2){
    rec();
  }
  if(q==3){
    tri();
  }
  if(q==4){
    cir();
  }
  if(q==5){
    sphere();
  }
}
