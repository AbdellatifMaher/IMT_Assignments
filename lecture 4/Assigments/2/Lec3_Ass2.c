#include <stdio.h>

void main(void)
{
	int x,y;
	printf("Please Enter Your ID : ");
	scanf("%d",&x);
	switch(x)
	{
		case 1234 : printf("Please Enter Password : ");
					int i =0;
					for(;i<2;i++)
					{
						scanf("%d",&y);
						if(y == 7788)
						{
							printf("Welcome Ahmed");
							break;
						}
						else
						{
							printf("Try again : ");
						}
					}
					if(i >= 3)
					{
						printf("Incorrect Answer For 3 Times ,No More Tries");
					}
					break;
		case 5678 : printf("Please Enter Password : ");
					int j =0;
					for(;j<3;j++)
					{
						scanf("%d",&y);
						if(y == 5566)
						{
							printf("Welcome Amr");
							break;
						}
						else
						{
							printf("Try again : ");
						}
					}
					if(j >= 3)
					{
						printf("Incorrect Answer For 3 Times ,No More Tries");
					}
					break;
		case 9870 : printf("Please Enter Password : ");
					int k =0;
					for(;k<3;k++)
					{
						scanf("%d",&y);
						if(y == 1122)
						{
							printf("Welcome Wael");
							break;
						}
						else
						{
							printf("Try again : ");
						}
					}
					if(k >= 3)
					{
						printf("Incorrect Answer For 3 Times ,No More Tries");
					}
					break;
		default   : printf("You Are Not Registered");break;
	}
}