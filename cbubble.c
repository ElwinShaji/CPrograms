#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generate_random(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	a[i]=rand()%100000;
}


void main()
{

  time_t begin = time(NULL);

	int a[100000],n,i,j,temp;
	printf("\n Enter size of array:- ");
	scanf("%d",&n);


	generate_random(a,n);


	printf("\n The random array: ");
	for(i=0;i<n;i++)
		printf(" %d ",a[i]);

	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}


	printf("\n The sorted array: ");
	for(i=0;i<n;i++)
	printf(" %d ",a[i]);
	printf("\n \n");

  time_t end = time(NULL);
  printf("Elapsed Time = %d", (end-begin));
}
