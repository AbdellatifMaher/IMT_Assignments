#include <stdio.h>

void main(void)
{
	int x,y,i=0;
	printf("Enter Your Number ");
	scanf("%d",&x);
	y=x;
	while(y)
	{
		y/=10;
		i++;
	}
	for(;i>0;i--)
	{
		printf("%d",x%10);
		x/=10;
	}
	
}