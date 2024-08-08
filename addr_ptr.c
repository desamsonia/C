#include<stdio.h>
int main()
{
	char arr[] = {1, 2, 3};
	char *p = arr;
	if(p == (char*) &arr)
	printf("Same");
	else
	printf("Not same");
//	getchar();
} 

