#include <stdio.h>
#include <stdlib.h>
void operation(int *p1,int *p2,int *s,int *b);
void main(void)
{
	int x,y,sum,sub;
	printf("Please Enter Number 1 : ");
	scanf("%d",&x);
	printf("Please Enter Number 2 : ");
	scanf("%d",&y);
	operation(&x,&y,&sum,&sub);
	printf("Te result of summation is : %d\n",sum);
	printf("Te result of subtraction is : %d\n",sub);
}
void operation(int *p1,int *p2,int *s,int *b)
{
	*s = *p1 + *p2;
	*b = *p1 - *p2;
}