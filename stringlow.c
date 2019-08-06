#include<stdio.h>
#include<strings.h>
int main(){
  char s[100];
  printf("Enter the string you want to make lower: \n\n");
  gets(s);
  printf("Now the string is converted to lower: \n\n");
  puts(strlwr(s));
}
