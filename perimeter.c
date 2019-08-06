#include<stdio.h>

int square(){
  int b;

  printf("Enter the Side of Square: \n");
  scanf("%d", &b);

  b=4*b;

  printf("The Perimeter of the Square is %d", b);



}
int rec(){
  int b,h,a;

  printf("Enter the Length of Rectangle: \n");
  scanf("%d", &h);
  printf("Enter the Breadth of Rectangle: \n");
  scanf("%d", &b);

  a=2*(b+h);
  printf("The Perimeter of the Rectangle is %d", a);




}
int tri(){
  int b,h,a;


  printf("Enter the Height of Triangle: \n");
  scanf("%d", &h);
  printf("Enter the Base of Triangle: \n");
  scanf("%d", &b);

  a=(b*b)+(h*h);
  a=sqrt(a);

  printf("The Hypotenuse of the triangle is %d", a);


}
int cir(){
  int b;

  printf("Enter the Radius of Sphere: \n");
  scanf("%d", &b);

  b=2*(3.14)*b;

  printf("The Circumference of the Circle is %d", b);





}






int main(){

  int q;

  printf("Choose from the following:\n");
  printf("1 - Perimeter of Square\n2 - Perimeter of Rectangle\n3 - Hyptonuse of Triangle\n4 - Circumference of Circle\n\n");

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



}
