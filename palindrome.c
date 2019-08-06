#include <stdio.h>
int second=0, reverse=0;
int num,check;

int main()
{
  printf("Enter the Number\n");
  scanf("%d", &num);

check=num;
printf("The number you entered is %d\n", num);

while (num>0) {

  second = num%10;

  reverse = reverse*10 + second;

  num = num/10;
}

if(check==reverse)
printf("Palindrome Confirmed!!\n");
else
printf("Not Palindrome\n");

printf("The reversed number is %d\n", reverse);
  return 0;
}
