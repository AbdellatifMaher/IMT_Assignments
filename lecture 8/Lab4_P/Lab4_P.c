#include <stdio.h>
#include <stdlib.h>
void main(void)
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *p=arr;
	int sum=0;
	for(;(p-arr)<10;p++)
	{
		sum+=*p;
	}
	printf("The sum is = %d",sum);
}