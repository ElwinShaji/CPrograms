#include<stdio.h>

int main()

{

  int num,i, a=0,b=1,c;

printf("Enter a New Number: ");
scanf("%d",&num);
printf("%d\n",a);
printf("%d\n",b);

for(i=0;i<=(num-3);i++)

{

  c=a+b;
  printf("%d\n",c);

  a=b;
  b=c;


}

}
