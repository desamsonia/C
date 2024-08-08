#include<stdio.h>

int main()
{
	char arr[] = {1, 2, 3};
	char *p = arr;
	printf("arr:%p\n",arr);
	printf("p:%p\n",p);
	printf("&p:%p\n",&p);

	if(&p ==  (char*) &arr)
	printf("Same");
	else
	printf("Not same");
	//getchar();
} 

