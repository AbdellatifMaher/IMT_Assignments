#include <stdio.h>


int Get_Max(int N1,int N2);

void main(void)
{
	int x,y,z;
	printf("Please Enter Value 1 : ");
	scanf("%d",&x);
	printf("Please Enter Value 2 : ");
	scanf("%d",&y);
	z=Get_Max(x,y);
	printf("The Maximum Value is %d",z);
}
int Get_Max(int N1,int N2)
{
	if(N1 >= N2)
	{
		return N1;
	}
	else
	{
		return N2;
	}
}