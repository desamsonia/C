#include<stdio.h>
int main()
{
	char arr[] = "geeksforgeeks";
	char *ptr1 = arr;
	char *ptr2 = ptr1 + 2;
	printf("ptr1:%p\n",ptr1);
	printf("ptr2:%p\n",ptr2);
	printf ("ptr2 - ptr1 = %d\n", ptr2 - ptr1);
	printf ("(int*)ptr2 - (int*) ptr1 = %d", (int*)ptr2 - (int*)ptr1);
//	getchar();
	return 0;
}

