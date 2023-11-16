#include <stdio.h>
#include "STD_TYPES.h"
	typedef struct {
	u8  id;
	u8  m;
	u8  e;
	u8  p;
}student;
void main(void)
{
	u8 x;
	student arr[3]={{0,100,99,80},{1,90,80,60},{2,100,100,90}};
	printf("Please Enter student Id ");
	scanf("%d",&x);
	if(x>=0 && x<3)
	{
		printf("Math : %d\nEnglish : %d\nPhysics : %d\n",arr[x].m,arr[x].e,arr[x].p);
	}
	else{
		printf("Wrong Id!!!");
	}
}