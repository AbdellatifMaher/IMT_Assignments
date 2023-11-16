#include <stdio.h>

int fac(int F);
void main(void)
{
	int x;
	printf("Enter Your Number :");
	scanf("%d",&x);
	printf("Result = %d",fac(x));
}
int fac(int F)
{
	if(F == 1 || F == 0)
		return 1;
	else
		return (F)*fac(F-1);
}