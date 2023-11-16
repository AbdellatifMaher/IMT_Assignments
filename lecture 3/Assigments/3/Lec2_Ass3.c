#include <stdio.h>

void main(void)
{
	int x,y,z;
	printf("Enter Number 1 : ");
	scanf("%d",&x);
	printf("Enter Number 2 : ");
	scanf("%d",&y);
	printf("Enter Number 3 : ");
	scanf("%d",&z);
	if(x >= y)
	{
		if(x > z)
		{
			printf("Maximum Number is %d",x);
		}
		else
		{
			printf("Maximum Number is %d",z);
		}
	}
	else
	{
		if(y > z)
		{
			printf("Maximum Number is %d",y);
		}
		else
		{
			printf("Maximum Number is %d",z);
		}
	}
}