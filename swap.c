#include<stdio.h>
int main(){

int a,b,c;

printf("Enter the first Number:\n");
scanf("%d",&a);
printf("Enter the second Number:\n");
scanf("%d",&b);
printf("Before swap the First Number is %d and Second Number is %d\n", a,b);

c=b;
b=a;
a=c;

printf("After swap the First Number is %d and Second Number is %d\n", a,b);


}
