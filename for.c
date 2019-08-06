#include<stdio.h>
int main(){
  int i,n;
  printf("How many times do you want to execute the Loop?\n");
  scanf("%d", &n);
  for(i=0;i<=n;i++){
    printf("This is %d of for loop\n", i);
  }
}
