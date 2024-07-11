#include<stdio.h>

int main()
{
	int a=14,b=24;

	a = a & (a-b) >> 31 | b & ~(a-b) >> 31;

	printf("min:%d\n",a);

	return 0;
}
