#include <stdio.h>
#include <stdlib.h>
int sum(int *p1,int *p2);
void main(void)
{
	int x,y;
	printf("Please Enter Number 1 : ");
	scanf("%d",&x);
	printf("Please Enter Number 2 : ");
	scanf("%d",&y);
	int r = sum(&x,&y);
	printf("The result is : %d",r);
}
int sum(int *p1,int *p2)
{
	return *p1+*p2;
}