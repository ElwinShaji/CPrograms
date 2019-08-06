#include<stdio.h>
#include<string.h>
int main(){
  printf("This is Something One \n");
  printf("This is Something Two \n");
  printf("Now to do String Concatinate!!\n");



  char s1[] = "This is Something One ", s2[] = "This is Something Two ";

  strcat(s1,s2);

  puts(s1);

}
