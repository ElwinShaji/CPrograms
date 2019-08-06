#include<stdio.h>
#include<string.h>
int main(){
  char s1[50],s2[50];
  printf("Enter First String \n");
  gets(s1);
  printf("Enter Second String \n");
  gets(s2);

  strcat(s1,s2);

  puts(s1);

}
