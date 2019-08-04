#include<stdio.h>
int main(){
    int a;
    int i;
    int k=0;

    printf("Enter the Number:\n");
    scanf("%d",&a);

    for(i=1; i<(a-1); i++){
      k=k+i;

    }

printf("%d", k);

    }
