#include<stdio.h>
int main()
{
	int a=5u,*b,**c,***d,****e;
	b=&a;
	c=&b;
	d=&c;
	e=&d;
	printf("%u %u %u %u",*b-5,**c-11,***d-6,65535+****e);
}
