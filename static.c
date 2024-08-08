#include<stdio.h> 
int main() 
{ 
	int i = 10; 

	static int x = i; 

	if (x==i) 
		printf("x and i are Equal\n"); 

	return 0; 
} 

