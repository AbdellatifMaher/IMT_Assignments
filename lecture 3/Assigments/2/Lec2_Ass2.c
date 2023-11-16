#include <stdio.h>

void main(void)
{
	int X,y;
	printf("Please Enter Your ID : ");
	scanf("%d",&X);
	switch(X)
	{
		case 1111 : printf("Enter Your Password : "); 
					scanf("%d",&y);
					if(y == 1111)
					{
						printf("User Name : Ahmed");
					}
					else
					{
						printf("Incorrect Password");
					}
					break;
		case 2222 : printf("Enter Your Password : "); 
					scanf("%d",&y);
					if(y == 2222)
					{
						printf("User Name : Abdo");
					}
					else
					{
						printf("Incorrect Password");
					}
					break;
		case 3333 : printf("Enter Your Password : "); 
					scanf("%d",&y);
					if(y == 3333)
					{
						printf("User Name : Mohammed");
					}
					else
					{
						printf("Incorrect Password");
					}
					break;
        default   : printf("Incorrect ID");break;
		
	}
}