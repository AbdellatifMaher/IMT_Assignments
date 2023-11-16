#include <stdio.h>

void main(void)
{
	int x;
	printf("Enter The Answer of 3 x 4 = ");
	scanf("%d",&x);
	while(x != 12)
	{
		printf("Not Correct,Please Try Again : ");
		scanf("%d",&x);
	}
	printf("Thank You");
}