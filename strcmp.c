#include<stdio.h>
#include<string.h>
int main(){
  printf("This is Something One \n");
  printf("This is Something Two \n");
  printf("Now to do String Compare!!\n");



  char s1[] = "This is Something One ", s2[] = "This is Something Totally Different ", s3[] = "This is Something One ";

  int c=strcmp(s1,s2);
  int r=strcmp(s1,s3);

  printf("strcmp(s1,s2)= %d", c);
  printf("strcmp(s1,s3)= %d", r);


}
