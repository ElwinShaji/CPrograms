#include<stdio.h>
int main(){
  int i=0,n;
  printf("How many times do you want to execute the Loop?\n");
  scanf("%d", &n);
  while(i<=n){
    printf("This is %d of While loop\n", i);
    i++;
  }
}
