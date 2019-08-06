#include<stdio.h>
#include<string.h>
int main(){
  char s1[]="Hi Yo WHats up!!", s2[20];
  printf("This is in First String: \n");
  puts(s1);
  printf("Copying this to Second String: \n");
  strcpy(s2,s1);
  printf("Now the Second string is: \n");
  puts(s2);



}
