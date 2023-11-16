#include <stdio.h>
#include <stdlib.h>


void main(void)
{
	int x;
	printf("Please Enter The Number of Numbers : ");
	scanf("%d",&x);
	int * ptr=(int *)malloc(sizeof(int) * x);
	for(int i=0;i<x;i++)
	{
		printf("Please Enter Number %d: ",i);
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<(x-1);j++)
		{
			if(ptr[j] > ptr[j+1])
			{
				ptr[j]=ptr[j]^ptr[j+1];
				ptr[j+1]=ptr[j]^ptr[j+1];
				ptr[j]=ptr[j]^ptr[j+1];
			}
		}
	}
	for(int i=0;i<x;i++)
	{
		printf("%d\n",ptr[i]);
	}
}