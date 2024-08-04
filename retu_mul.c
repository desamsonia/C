#include<stdio.h>

int fun(int a,int b,int c)
{
	return (a+b,b+c);
}

int main()
{
	int a;
	a=fun(2,3,4);
	printf("%d\n",a);
	return 0;
}

