#include<stdio.h>

static int func(int b)
{
	return b;
}

int main()
{
	int a;
	a=func(4);
	printf("%d\n",a);
	return 0;
}
