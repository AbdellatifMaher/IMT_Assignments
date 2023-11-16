#include <stdio.h>
int Add(int x,int y);
int Sub(int x,int y);
int Mul(int x,int y);
int Div(int x,int y);
int Mod(int x,int y);
void main(void)
{
	int N1,N2,Res;
	char C;
	printf("Please Enter Number 1 : ");
	scanf("%d",&N1);
	printf("Please Enter Number 2 : ");
	scanf("%d",&N2);
	printf("Please Enter Your Operation : ");
	scanf("%c%c",&C,&C);
	switch(C)
	{
		case '+' : Res=Add(N1,N2);printf("Result = %d",Res);break;
		case '-' : Res=Sub(N1,N2);printf("Result = %d",Res);break;
		case '*' : Res=Mul(N1,N2);printf("Result = %d",Res);break;
		case '/' : Res=Div(N1,N2);printf("Result = %d",Res);break;
		case '%' : Res=Mod(N1,N2);printf("Result = %d",Res);break;
		default  : printf("Incorrect Operation !!");break;
	}
}