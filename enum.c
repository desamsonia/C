#include<stdio.h>

int main()
{
	enum channel {star, sony, zee};
	enum symbol {hash, star};

	int i = 0;
	for(i = star; i <= zee; i++)
	{
		printf("%d ", i);
	}

	return 0;
}

