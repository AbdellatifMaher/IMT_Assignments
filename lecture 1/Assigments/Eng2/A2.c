#include <stdio.h>

void main(void)
{
	int X,Y,Z;
	printf("Enter your Number : ");
	scanf("%d",&X);
	printf("Enter The Number of Bit : ");
	scanf("%d",&Y);
	Z= (1<<Y) | X ;
	printf("After Set Bit >> %d\n",Z);
	Z= ~(1<<Y) & X ;
	printf("After Clear Bit >> %d\n",Z);
	Z= (1<<Y)^ X ;
	printf("After Toogle Bit >> %d\n",Z);
	Z= ((1<<Y) & X)>>Y ;
	// (X>>Y) & 1
	printf("The value of The Bit >> %d\n",Z);
	
}