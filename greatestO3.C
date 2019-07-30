#include<stdio.h>

int main()

{

int i ,j ,k;

scanf("%d %d %d", &i, &j, &k);

printf("The numbers you entered are %d, %d and %d\n",i,j,k);

if (i>j)
{
  if (i>k)
      printf("%d is the greatest of them all\n",i);
    else  if (k>i)
      printf("%d is the greatest of them all\n",k);
}

else  if (j>i)
 {
    if (j>k)
      printf("%d is the greatest of them all\n",j);
    else  if (k>j)
      printf("%d is the greatest of them all\n",k);
  } 
  return 0;
}
