#include<stdio.h>
int main(){
    int a;
    int b=0;
    printf("Enter the Number:\n");
    scanf("%d",&a);

    for(int i=2; i<=a/2; i++){

      if(a%i == 0){
        b=1;

      }

    }
if(b==0){
  printf("%d is a Prime Number",a);
}
else{
  printf("%d is not a Prime Number",a);
}


}
