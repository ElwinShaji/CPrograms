#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,flag,num;

  printf("Enter the limit. \n");
  scanf(" %d", &num);

  for(i=1;i<num;i++)
  {
    flag = 0;
    for(j=2;j<=i/2;j++)
    {
      if(i%j == 0)
      {
        flag = 1;
        break;
      }
    }
    if(flag == 0)
    {
      printf("%d", i);
    }
    else
    {
      printf(".");
    }
  }
  return 0;
}
