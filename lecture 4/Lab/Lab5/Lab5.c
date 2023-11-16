#include <stdio.h>

void main(void)
{
	int x,y=1;
	printf("Enter The Number To Display Its MultiPlication Table : ");
	scanf("%d",&x);
	while(y<=x)
	{
		printf("%d x %d = %d\n",x,y,x*y);
		y++;
	}
}