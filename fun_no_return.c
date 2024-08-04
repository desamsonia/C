#include<stdio.h>

int fun()
{
	printf("jiiiiiii");
}

int main()
{
	int x = 130;
	x=fun();
	printf("%d\n",x);  /// returning no of characters present in the printf() inside fun(), that is jiiiiiii = 8
	return 0;
}
