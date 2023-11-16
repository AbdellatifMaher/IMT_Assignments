#include <stdio.h>

void main(void)
{
	int size,NS;
	printf("Please Enter Your Array Size : ");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
	{
		printf("Please Enter Number %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Please Enter Number To Search : ");
	scanf("%d",&NS);
	for(int i=0;i<size;i++)
	{
		if(NS == arr[i])
		{
			printf("The Number At Index %d",i);
			break;
		}
	}
}