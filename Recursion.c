#include<stdio.h>
int main(){
static int i;
  if(i==5)
  printf("Over\n");
  else{
    printf("This is i = %d\n",i);
    i++;
    main();
  }
}
