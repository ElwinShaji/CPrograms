#include<stdio.h>
int main(){
int i,num,j,flag;
printf("Enter the number you want to check:");
scanf("%d", &num);


for(i=1;i<num;i++)
  {
    flag=0;
    for(j=2;j<num/2;j++)
    {
      if(i % j != 0)
      {
        flag = 1;
        break;
      }
      }

      if(flag ==1)
      {
        printf("%d\n",i);
      }
  }

  }
