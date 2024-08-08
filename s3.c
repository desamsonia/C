#include <stdio.h>
int main()
{
	union test {
		int i;
		int j;
	};

	union test var.i = 4;
	//var.i = 10;
	printf("%d, %d\n", var.i, var.j);
}

