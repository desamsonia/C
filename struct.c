#include<stdio.h>

union tag
{
	int x;
	char y;
};

int main()
{
	union tag a;
	a.x = 256;
	a.y = 50;

	printf("%d,%d",a.x,a.y);
	return 0;
}
