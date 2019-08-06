#include<stdio.h>
#include<math.h>
int main(){
int a,b;

while(a<10){
  b = rand() % 50 + 1;
  printf("%d\n", b);
  a++;
}
}
