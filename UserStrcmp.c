#include<stdio.h>
#include<string.h>
int main(){
  char s1[50],s2[50];
  int r;
  printf("Enter First String \n");
  gets(s1);
  printf("Enter Second String \n");
  gets(s2);


  r = strcmp(s1,s2);
  if(r==0)
  printf("Strings are equal");
  else
  printf("Strings not equal");


}
