
#include <stdio.h>

int main (void)
{
	printf("True In GCC = %d\n",1&&1);
	printf("False In GCC = %d",1&&0);
	return 0;
}