
#include <stdio.h>

void main(void)
{
	int Num;
	printf("Enter Number : ");
	scanf("%d",&Num);
	(Num > 0) ? printf("Positive +") : (Num == 0) ? printf("Zero") : printf("Negative -"); 
}