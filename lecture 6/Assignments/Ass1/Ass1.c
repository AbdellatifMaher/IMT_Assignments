#include <stdio.h>
#include <stdlib.h>
void main(void)
{
	int arr[11];
	for(int i=1;i<11;i++)
	{
		printf("Please Enter Number %d : ",i);
		scanf("%d",&arr[i]);
	}
	int m=-432123432,y=-432123432;
	for(int i=1;i<11;i++)
	{
		for(int j=i+1;j<11;j++)
		{
			if(arr[i] > arr[j])
			{
				y=arr[i];
				if(y > m)
				{
					m=y;
				}
			}
			else
			{
				y=arr[j];
				if(y > m)
				{
					m=y;
				}
			}
			
		}
	}
	printf("Max Value = %d\n",m);
	for(int i=1;i<11;i++)
	{
		for(int j=i+1;j<11;j++)
		{
			if(arr[i] < arr[j])
			{
				y=arr[i];
				if(y < m)
				{
					m=y;
				}
			}
			else
			{
				y=arr[j];
				if(y < m)
				{
					m=y;
				}
			}
		}
	}
	printf("Min Value = %d",m);
}