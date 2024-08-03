#include <stdio.h>
#include <stdarg.h>

float sum(int cnt, ...)
{
	float s = 0.0;
	va_list ap;
	va_start(ap,cnt);

	while(cnt--)
	{
		s += va_arg(ap,double);
	}
	va_end(ap);
	return s;
}

int main()
{
	float a = 23.4,b = 78.8;

	printf("%f\n",sum(2,a,b));
	printf("%f\n",sum(6,1.1,2.1,3.1,4.1,5.1,b));

	return 0;
}
