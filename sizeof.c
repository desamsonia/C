#include<stdio.h> 
#include <string.h> 
void main() 
{ 
	char str[] = "program";
	printf("sizeof:%d\n",sizeof(str));
	printf("strlen:%d\n",strlen(str));
	printf("%d %d", sizeof("program"), strlen("program")); 
} 
