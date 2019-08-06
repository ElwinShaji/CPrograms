#include<stdio.h>
int main(){

  int i;

  printf("This is a Forward For Loop\n\n");

  for(i=0; i<20; i++){
    printf(" %d", i);
  }

  printf("\n\nThis is Reverse For Loop\n\n");

  for(i=19; i>=0; i--){
    printf(" %d", i);

  }
  printf("\n\n");
}
