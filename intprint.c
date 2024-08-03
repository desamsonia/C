#include<stdio.h>
#include<stdarg.h>

int summ(int cnt,...)
{
	int i,s=0;
	va_list ap;
	va_start(ap,cnt);

	while(cnt--)
	{
		s += va_arg(ap,int);
	}
	va_end(ap);
	return s;
}

int main()
{
	int x=2,y=3;
	printf("%d",summ(2,x,y));
	printf("\n");
	printf("%d",summ(6,1,1,x,1,1,1));

	return 0;
}
