#include <stdio.h>
#include "STD_TYPES.h"
typedef struct {
	u8  id;
	u16 pw;
	u16 sal;
}jop;
jop func(jop X);
void main(void)
{
	jop emp={5,1234,10000};
	emp=func(emp);
	printf("Id = %d\n",emp.id);
	printf("Password = %d\n",emp.pw);
	printf("Salary = %d\n",emp.sal);
}
jop func(jop X)
{
	X.id++;
	X.pw++;
	X.sal++;
	return X;
}