#include <stdio.h>
int Add(int x,int y);
int Sub(int x,int y);
int Mul(int x,int y);
int Div(int x,int y);
int Mod(int x,int y);
int And(int x,int y);
int Or(int x,int y);
int Not(int x);
int Xor(int x,int y);
int Increment(int x);
int Decrement(int x);

void main(void)
{
    int c,Res,X,Y;
    printf("Please Enter Your Operation ID : ");
    scanf("%d",&c);
	switch(c)
	{
		case 1  : printf("Please Enter Two Numbers : "); scanf("%d%d",&X,&Y);Res=Add(X,Y);printf("Result = %d",Res);break;
		case 2  : printf("Please Enter Two Numbers : "); scanf("%d%d",&X,&Y);Res=Sub(X,Y);printf("Result = %d",Res);break;
		case 3  : printf("Please Enter Two Numbers : "); scanf("%d%d",&X,&Y);Res=Mul(X,Y);printf("Result = %d",Res);break;
		case 4  : printf("Please Enter Two Numbers : "); scanf("%d%d",&X,&Y);Res=Div(X,Y);printf("Result = %d",Res);break;
		case 5  : printf("Please Enter Two Numbers : "); scanf("%d%d",&X,&Y);Res=And(X,Y);printf("Result = %d",Res);break;
		case 6  : printf("Please Enter Two Numbers : "); scanf("%d%d",&X,&Y);Res=Or(X,Y);printf("Result = %d",Res);break;
		case 7  : printf("Please Enter The Numbers : "); scanf("%d",&X);Res=Not(X);printf("Result = %d",Res);break;
		case 8  : printf("Please Enter Two Numbers : "); scanf("%d%d",&X,&Y);Res=Xor(X,Y);printf("Result = %d",Res);break;
		case 9  : printf("Please Enter Two Numbers : "); scanf("%d%d",&X,&Y);Res=Mod(X,Y);printf("Result = %d",Res);break;
		case 10 : printf("Please Enter The Numbers : "); scanf("%d",&X);Res=Increment(X);printf("Result = %d",Res);break;
		case 11 : printf("Please Enter The Number : "); scanf("%d",&X);Res=Decrement(Y);printf("Result = %d",Res);break;
		default : printf("Incorrect Operation !!");break;
	}
}
int Add(int x,int y)
{
	return x+y;
}
int Sub(int x,int y)
{
	return x-y;
}
int Mul(int x,int y)
{
	return x*y;
}
int Div(int x,int y)
{
	return x/y;
}
int Mod(int x,int y)
{
	return x%y;
}
int And(int x,int y)
{
	return x&y;
}
int Or(int x,int y)
{
	return x|y;
}
int Not(int x)
{
	return ~x;
}
int Xor(int x,int y)
{
	return x^y;
}
int Increment(int x)
{
	return ++x;
}
int Decrement(int x)
{
	return --x;
}