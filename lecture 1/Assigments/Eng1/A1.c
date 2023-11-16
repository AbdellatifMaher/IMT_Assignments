#include <stdio.h>

void main(void)
{
	int X=10,Y=8,Z=3,W=2;
	X=X+Y;
	Y=X-Y;
	X=X-Y;
	printf("X=%d\nY=%d\n",X,Y);
	Z=Z^W;
	W=Z^W;
	Z=Z^W;
	printf("Z=%d\nW=%d\n",Z,W);
}