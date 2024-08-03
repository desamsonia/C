#include <stdio.h>
#include <stdarg.h>

void printStrings(const char *ptr, ...)
{
	va_list handle;
	va_start(handle,ptr);
	puts(ptr);

	while(ptr = va_arg(handle,char*))
	{
		puts(ptr);
	}

	va_end(handle);
}

int main()
{
	printStrings("sonia","reddy",NULL);
	printStrings("rajendra","prasad","chelloji","C_developer",NULL);
	return 0;
}
