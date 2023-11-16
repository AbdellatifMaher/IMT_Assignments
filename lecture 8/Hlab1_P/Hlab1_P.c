#include <stdio.h>
#include <stdlib.h>

int (*ptr[4])(int f,int d);
int sum(int f,int d);
int sub(int f,int d);
int mul(int f,int d);
int Div(int f,int d);

void main(void)
{
	ptr[0]=sum;
    ptr[1]=sub;
    ptr[2]=mul;
    ptr[3]=Div;
	int x,y,z;
	printf("Please Enter Number 1 : ");
	scanf("%d",&x);
	printf("Please Enter Number 2 : ");
	scanf("%d",&y);
	printf("Please Enter Your Operation Number : ");
	scanf("%d",&z);
	int r= ptr[z](x,y);
	printf("The Result is : %d",r);
}
int sum(int f,int d)
{
	return f+d;
}
int sub(int f,int d)
{
	return f-d;
}
int mul(int f,int d)
{
	return f*d;
}
int Div(int f,int d)
{
	return f/d; 
}