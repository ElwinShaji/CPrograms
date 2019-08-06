#include<stdio.h>
#include<string.h>
int main(){
  char s1[50],s2[50];
  int r;
  printf("Enter First String \n");
  gets(s1);
  printf("Enter Second String \n");
  gets(s2);
  printf("Second String Before Copy: ");
  puts(s2);
  strcpy(s2,s1);
  printf("Now the Second string is: \n");
  puts(s2);



}
