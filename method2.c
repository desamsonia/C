#include <stdio.h>
#include <stdarg.h>

void prints(int cnt, ...)
{
	char *temp;
	va_list handle;

	va_start(handle,cnt);

	while(cnt--)
	{
		temp = va_arg(handle,char*);
		puts(temp);
	}

	va_end(handle);
	return;
}

int main()
{
	prints(2,"king","C_dev");
	return 0;
}
