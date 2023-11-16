#include <stdio.h>

void main(void)
{
	int x,i=1,y=1;
	printf("Enter An Integer : ");
	scanf("%d",&x);
	do
	{
		y*=i;
		i++;
	}while(i <= x);
	printf("%d",y);
}