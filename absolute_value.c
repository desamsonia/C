/* get absolute value */

#include<stdio.h>

int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	n = (n ^ (n>>31)) - ( n>>31);
	printf("n:%d\n",n);
	return 0;
}
