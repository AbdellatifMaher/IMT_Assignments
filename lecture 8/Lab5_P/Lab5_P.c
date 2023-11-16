#include <stdio.h>
#include <stdlib.h>
int func(int *p1,int *p2);
void main(void)
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[10]={11,12,13,14,15,16,17,18,19,20};
	int x=0;
	x=func(a,b);
	printf("The Result is = %d",x);
	
}
int func(int *p1,int *p2)
{
	int sum=0;
	for(int i=0;i<10;i++)
	{
		sum+=p1[i] * p2[i];
	}
	return sum;
}