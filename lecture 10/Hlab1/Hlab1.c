#include <stdio.h>
void max(int x);
void main(void)
{
	int y;
	for(int i=0;i<3;i++)
	{
		printf("Enter Your %d Value : ",i);
		scanf("%d",&y);
		max(y);
	}
}
void max(int x)
{
	static int maximum = -45675843;
	if(x > maximum)
	{
		maximum=x;
	}
	printf("%d\n",maximum);
}