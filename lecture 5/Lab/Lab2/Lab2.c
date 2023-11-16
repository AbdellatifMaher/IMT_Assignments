#include <stdio.h>
int X=10;
int Y=20;

void Swap(void);

void main(void)
{
	printf("X before Swap = %d\n",X);
	printf("Y before Swap = %d\n",Y);
	Swap();
	printf("X after Swap = %d\n",X);
	printf("Y after Swap = %d\n",Y);
}
void Swap(void)
{
	X=X^Y;
	Y=X^Y;
	X=X^Y;
}