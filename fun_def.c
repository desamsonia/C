#include<stdio.h>

int main()
{
	int func(int a,int b)
	{
		return (a+b);
	}

	int c;
	c=func(6,4);
	printf("%d",c);
	return 0;
}
