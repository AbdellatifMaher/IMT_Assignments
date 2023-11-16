#include <stdio.h>
#include "STD_TYPES.h"
void main(void)
{
	printf("Sizeof unsigned char = %d\n",sizeof(u8));
	printf("Sizeof signed char = %d\n",sizeof(s8));
	printf("Sizeof unsigned short = %d\n",sizeof(u16));
	printf("Sizeof signed short = %d\n",sizeof(s16));
	printf("Sizeof unsigned long = %d\n",sizeof(u32));
	printf("Sizeof signed long = %d\n",sizeof(s32));
	printf("Sizeof unsigned long long = %d\n",sizeof(u64));
	printf("Sizeof signed long long = %d\n",sizeof(u64));
	printf("Sizeof float = %d\n",sizeof(f32));
	printf("Sizeof double = %d\n",sizeof(f64));
	printf("Sizeof long double = %d\n",sizeof(f128));
	
}