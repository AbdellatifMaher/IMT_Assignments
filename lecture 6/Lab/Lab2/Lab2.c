#include <stdio.h>

void main(void)
{
	int arr[10];
	int S=0;
	for(int i=0;i<10;i++)
	{
		printf("Please Enter Number %d: ",i);
		scanf("%d",&arr[i]);
		S+=arr[i];
	}
	printf("Sum of Array Elements = %d\n",S);
	printf("Avarage Of Array Elements = %f",S/10.0);
}