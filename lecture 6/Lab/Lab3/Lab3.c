#include <stdio.h>

void main(void)
{
	int size;
	printf("Please Enter Your Array Size : ");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
	{
		printf("Please Enter Number %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<(size-1);i++)
	{
		for(int j=0;j<(size-1-i);j++)
		{
			if(arr[j+1] < arr[j])
			{
				int x= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=x;
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		printf("%d 	",arr[i]);
	}
}