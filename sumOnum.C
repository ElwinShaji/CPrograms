#include <stdio.h>
int main(){
printf("Enter a number\n");
int num, second;
int sum =0;
scanf("%d", &num);
printf("The number you entered is %d\n", num);

while(num>1){


  second = num%10;

 sum = sum + second;

  num = num/10;

}
printf("The sum of the number is %d\n", sum);
}
