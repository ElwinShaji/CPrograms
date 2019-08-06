#include<stdio.h>

  int asquare(){
    int b;

    printf("Enter the Side of Square: \n");
    scanf("%d", &b);

    b=b*b;

    printf("The area of the Square is %d", b);


  }

  int arec(){

    int b,h,a;

    printf("Enter the Length of Rectangle: \n");
    scanf("%d", &h);
    printf("Enter the Breadth of Rectangle: \n");
    scanf("%d", &b);

    a=b*h;
    printf("The area of the Rectangle is %d", a);


  }

  int atri(){

    int b,h,a;

    printf("Enter the Height of Triangle: \n");
    scanf("%d", &h);
    printf("Enter the Base of Triangle: \n");
    scanf("%d", &b);

    a=(b*h)/2;
    printf("The area of the triangle is %d", a);


  }

  int acir(){

    int b;

    printf("Enter the Radius of Sphere: \n");
    scanf("%d", &b);

    b=(3.14)*(b*b);

    printf("The area of the Circle is %d", b);


  }

  int asphere(){

    int a,b;

    printf("Enter the Radius of Sphere: \n");
    scanf("%d", &b);

    a = (b*b)*4*(3.14);

    printf("The area of the Sphere is %d", a);



  }


  int psquare(){
    int b;

    printf("Enter the Side of Square: \n");
    scanf("%d", &b);

    b=4*b;

    printf("The Perimeter of the Square is %d", b);



  }
  int prec(){
    int b,h,a;

    printf("Enter the Length of Rectangle: \n");
    scanf("%d", &h);
    printf("Enter the Breadth of Rectangle: \n");
    scanf("%d", &b);

    a=2*(b+h);
    printf("The Perimeter of the Rectangle is %d", a);




  }
  int ptri(){
    int b,h,a;


    printf("Enter the Height of Triangle: \n");
    scanf("%d", &h);
    printf("Enter the Base of Triangle: \n");
    scanf("%d", &b);

    a=(b*b)+(h*h);
    a=sqrt(a);

    printf("The Hypotenuse of the triangle is %d", a);


  }
  int pcir(){
    int b;

    printf("Enter the Radius of Sphere: \n");
    scanf("%d", &b);

    b=2*(3.14)*b;

    printf("The Circumference of the Circle is %d", b);





  }






  int main(){
    int q;
    printf("Choose Any of the following\n");
    printf("1 - Area of Square\n2 - Area of Rectangle\n3 - Area of Triangle\n4 - Area of Circle\n5 - Area of Sphere\n6 - Perimeter of Square\n7 - Perimeter of Rectangle\n8 - Hyptonuse of Triangle\n9 - Circumference of Circle\n\n ");
    scanf(" %d", &q);
    if(q==1){
      asquare();
    }
    if(q==2){
      arec();
    }
    if(q==3){
      atri();
    }
    if(q==4){
      acir();
    }
    if(q==5){
      asphere();
    }
    if(q==6){
      psquare();
    }
    if(q==7){
      prec();
    }
    if(q==8){
      ptri();
    }
    if(q==9){
      pcir();
    }
    else
    printf("Wrong Entry");

  }
