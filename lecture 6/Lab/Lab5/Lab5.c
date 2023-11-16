#include <stdio.h>

void main(void)
{
	int size,NS,k=0;
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
	int S=0;
	int E=size-1;
	int M=(S+E)/2;
	while(S<=E)
	{
		if(NS == arr[M])
		{
			k=1;
			break;
		}
		else
		{
			if(NS > arr[M])
			{
				S=M+1;
				M=(S+E)/2;
			}
			else
			{
				E=M-1;
				M=(S+E)/2;
			}
		}
	}
	if(k)
	{
		printf("Number Found In Index %d",M);
	}
	else
	{
		printf("Number Not Founded ");
	}
	
}