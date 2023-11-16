#include <stdio.h>

int max_4_values(int X,int Y,int Z,int W);
int min_4_values(int X,int Y,int Z,int W);


void main(void)
{
	int x,y,z,w;
	printf("Enter Your Four Values :");
	scanf("%d%d%d%d",&x,&y,&z,&w);
	int m= max_4_values(x,y,z,w);
	printf("Max Value = %d\n",m);
	m= min_4_values(x,y,z,w);
	printf("Min Value = %d\n",m);
	
}
int max_4_values(int X,int Y,int Z,int W)
{
	if(X > Y)
	{
		if(X > Z)
		{
			if(X > W)
			{
				return X;
			}
			else
			{
				return W;
			}
		}
		else
		{
			if(Z > W)
			{
				return Z;
			}
			else
			{
				return W;
			}
		}
	}
	else
	{
		if(Y > Z)
		{
			if(Y > W)
			{
				return Y;
			}
			else
			{
				return W;
			}
		}
		else
		{
			if(Z > W)
			{
				return Z;
			}
			else
			{
				return W;
			}
		}
	}
}
int min_4_values(int X,int Y,int Z,int W)
{
	if(X < Y)
	{
		if(X < Z)
		{
			if(X < W)
			{
				return X;
			}
			else
			{
				return W;
			}
		}
		else
		{
			if(Z < W)
			{
				return Z;
			}
			else
			{
				return W;
			}
		}
	}
	else
	{
		if(Y < Z)
		{
			if(Y < W)
			{
				return Y;
			}
			else
			{
				return W;
			}
		}
		else
		{
			if(Z < W)
			{
				return Z;
			}
			else
			{
				return W;
			}
		}
	}
}