#include<stdio.h>
int main()
{
	int i;
	char ch[] = {'x', 'y', 'z'};
	char *ptr, *str1;
	ptr = ch;
	str1 = ch;
	printf("%d\n",'x');
	printf("%d\n",'y');
	i = (*ptr-- + ++*str1) - 10;
	printf("%d", i);
	
	return 0;
}

