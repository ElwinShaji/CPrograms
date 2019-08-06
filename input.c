#include<stdio.h>
int main(){
  char str;
  int num;
  float fra;
  fflush(stdin);


  printf("Enter a Fractional Value:\n");
  scanf(" %f", &fra);


  printf("Enter a Numerical Value:\n");
  scanf(" %d", &num);

  printf("Enter a character Value:\n");
  scanf(" %c", &str);


  printf("The Character value you have entered is %c and Numerical value is %d and the fractional value is %f", str, num, fra);


}
