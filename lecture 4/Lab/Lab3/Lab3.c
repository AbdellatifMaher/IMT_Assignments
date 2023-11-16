#include <stdio.h>

void main(void)
{
	int x,y=0;
	printf("Enter The 10 Numbers\n");
	for(int i=1;i<=10;i++)
	{
		printf("Number-%d : ",i);
		scanf("%d",&x);
		y+=x;
	}
	printf("The sum of 10 Numbers is : %d\n",y);
	printf("The Average : %f",y/10.0);
}