#include <stdio.h>

int main(void)
{
	int W;
	printf("Please Enter Your Working Hours : ");
	scanf("%d",&W);
	if(W < 40)
	{
		W=(W * 50) * 0.9 ;
		printf("Your Salary Is : %d",W);
		return 0;
	}
	W=(W * 50);
	printf("Your Salary Is : %d",W);
	return 0;
}