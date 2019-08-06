#include<stdio.h>
#include<strings.h>
int main(){
  char s[100];
  printf("Enter the string you want to make upper case: \n\n");
  gets(s);
  printf("\nNow the string is converted to upper case: \n\n");
  puts(strupr(s));
}
