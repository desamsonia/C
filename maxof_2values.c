
#include<stdio.h>

int main()
{
	int a = 24,b = 6;

	a = b & (a-b) >> 31 |  a & ~(a-b)>>31;
	printf("max:%d\n",a);
	return 0;
}

