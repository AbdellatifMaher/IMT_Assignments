#include <stdio.h>

void main(void)
{
	int X;
	printf("Please Enter Number : ");
	scanf("%d",&X);
	if(X>=85 && X<=100)
	{
		printf("Your Rating Is Excellent");
	}
	else if(X>=75 && X<85)
	{
		printf("Your Rating Is Very Good");
	}
	else if(X>=65 && X<75)
	{
		printf("Your Rating Is Good");
	}
	else if(X>=50 && X<65)
	{
		printf("Your Rating Is Normal");
	}
	else if (X>=0 && X<50)
	{
		printf("Your Rating Is Failed");
	}
	else
	{
		printf("Error Grade !!");
	}
}