#include<stdio.h>
#include<string.h>
int main(){
  char s1[50];

  printf("Enter the String \n");
  gets(s1);

  printf("This is the string length: ");
  printf("%d", strlen(s1));
}
