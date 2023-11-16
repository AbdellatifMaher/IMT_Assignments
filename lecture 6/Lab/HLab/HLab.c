#include <stdio.h>

void main(void)
{
	int size;
	int flag=0;
	printf("Please Enter Your Array Siza : ");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
		for(int i=0;i<(size/2);i++)
		{
			if(arr[i] != arr[size-(i+1)])
			{
				flag =1;
				break;
			}
		}
	
		if(flag)
		{
			printf("Not Mirror");
		}
		else
		{
			printf("Mirror");
		}
}