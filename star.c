#include<stdio.h>
int main(){
  int i,j,n;
  printf("How many times do you want to execute the Loop?\n");
  scanf("%d", &n);

  for(i=1;i<=n;i++){

    for(j=0;j<i;j++){
      printf("* ");

    }
    printf("\n");
  }
}
