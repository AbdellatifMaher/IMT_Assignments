#include <stdio.h>

void main(void)
{
	int x;
	printf("Please Enter The Hieght Of The Pyramid : ");
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		for(int j=x-i;j>0;j--)
		{
			printf(" ");
		}
		for(int k = 1;k<=(i + (i-1));k++)
		{
			printf("*");
		}
		printf("\n");
	}
}