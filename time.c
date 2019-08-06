#include<stdio.h>
#include<math.h>
#include<time.h>
int main(){

  time_t begin = time(NULL);

int a,b;


while(a<10){
  b = rand() % 50 + 1;
  printf("%d\n", b);
  a++;


}

time_t end = time(NULL);
printf("Elapsed Time = %d", (end-begin));
}
