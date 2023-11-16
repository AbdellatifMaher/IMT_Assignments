#include <stdio.h>

void main(void)
{
	int X;
	printf("Please Enter Number : ");
	scanf("%d",&X);
	if(X%2)
	{
		printf("Number is Odd");
	}
	else
	{
		printf("Number is Even");
	}
}