#include <stdio.h>
#include <stdlib.h>
void main(void)
{
	int x=10;
	printf("X before change is : %d\n",x);
	int *ptr=&x;
	*ptr=20;
	printf("X after change is : %d",x);
}