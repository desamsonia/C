#include<stdio.h>

int sum(int a,int b)
{
	printf("Sum is %d\n",a+b);
	return a+b;
}

int main()
{
	(void)sum(1,2);
	return 0;
}

