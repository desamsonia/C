#include<stdio.h>

int main()
{
	int k=1;
	switch(k)
	{
		case 1:
		case 2: k++;
			continue;
	}
	return 0;
}
