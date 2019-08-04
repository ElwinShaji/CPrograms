#include<stdio.h>
int a,b,c;

int add(){
  c=a+b;
  printf("The Sum of the two numbers are: %d", c);
}

int diff(){
  c=a-b;
  printf("The Difference of the two numbers are: %d", c);

}

int mul(){
  c=a*b;
  printf("The Multiplication of the two numbers are: %d", c);

}

int div(){
  c=a/b;
  printf("The Divison of the two numbers are: %d", c);
}

int main(){
  int num;
  printf("Enter the first Number:\n");
  scanf("%d",&a);
  printf("Enter the second Number:\n");
  scanf("%d",&b);
  printf("Enter 1 for Addition\n Enter 2 for Subtraction\n Enter 3 for Multiplication\n Enter 4 for Divison\n");
  scanf("%d", &num);
  if(num==1){
    add();
  }
  if(num==2){
    diff();
  }
  if(num==3){
    mul();
  }
  if(num==4){
    div();
  }
}
