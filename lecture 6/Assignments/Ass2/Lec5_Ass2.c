#include <stdio.h>
#include <stdlib.h>
void main(void)
{
	int passed=0,failled=0,avg=0,m1=-999999999,m2=-999999999,m3=-999999999;
	int class1[10] ={30,60,54,12,87,99,10,23,44,96};
	int class2[10] ={32,80,54,98,84,91,100,23,44,46};
	int class3[10] ={20,76,54,77,85,93,1,74,24,69};
	for(int i=0;i<10;i++)
	{
		if(class1[i] <50)
		{
			failled++;
		}
		else
		{
			passed++;
		}
		if(class2[i] <50)
		{
			failled++;
		}
		else
		{
			passed++;
		}
		if(class3[i] <50)
		{
			failled++;
		}
		else
		{
			passed++;
		}
		avg+=class1[i]+class2[i]+class3[i];
	}
	printf("Number of passed students : %d\n",passed);
	printf("Number of failed students : %d\n",failled);

	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(class1[i] > class1[j])
			{
				if(class1[i] > m1)
				{
					m1=class1[i];
				}
			}
			else
			{
				if(class1[j] > m1)
				{
					m1=class1[j];
				}
			}
			if(class2[i] > class2[j])
			{
				if(class2[i] > m2)
				{
					m2=class2[i];
				}
			}
			else
			{
				if(class2[j] > m2)
				{
					m2=class2[j];
				}
			}
			if(class3[i] > class3[j])
			{
				if(class3[i] > m3)
				{
					m3=class3[i];
				}
			}
			else
			{
				if(class3[j] > m3)
				{
					m3=class3[j];
				}
			}
			
		}
	}
	if(m1>m2)
	{
		if(m1>m3)
		{
			printf("Highest grade : %d\n",m1);
		}
		else
		{
			printf("Highest grade : %d\n",m3);
		}
	}
	else
	{
		if(m2>m3)
		{
			printf("Highest grade : %d\n",m2);
		}
		else
		{
			printf("Highest grade : %d\n",m3);
		}
	}
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(class1[i] < class1[j])
			{
				if(class1[i] < m1)
				{
					m1=class1[i];
				}
			}
			else
			{
				if(class1[j] < m1)
				{
					m1=class1[j];
				}
			}
			if(class2[i] < class2[j])
			{
				if(class2[i] < m2)
				{
					m2=class2[i];
				}
			}
			else
			{
				if(class2[j] < m2)
				{
					m2=class2[j];
				}
			}
			if(class3[i] < class3[j])
			{
				if(class3[i] < m3)
				{
					m3=class3[i];
				}
			}
			else
			{
				if(class3[j] < m3)
				{
					m3=class3[j];
				}
			}
			
		}
	}
	if(m1<m2)
	{
		if(m1<m3)
		{
			printf("Lowest grade : %d\n",m1);
		}
		else
		{
			printf("Lowest grade : %d\n",m3);
		}
	}
	else
	{
		if(m2<m3)
		{
			printf("Lowest grade : %d\n",m2);
		}
		else
		{
			printf("Lowest grade : %d\n",m3);
		}
	}
	printf("Average grade : %f",avg/30.0);
}
	