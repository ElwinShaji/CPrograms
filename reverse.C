#include <stdio.h>
int second=0, reverse=0,fire =0;
int num;

int main()
{
  printf("Enter the Number\n");
  scanf("%d", &num);

printf("The number you entered is %d\n", num);

while (num>0) {

  second = num%10;

  reverse = reverse*10 + second;

  num = num/10;



}
printf("The reversed number is %d\n", reverse);
  return 0;
}
