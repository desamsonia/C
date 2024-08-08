#include <stdio.h> 
int main() 
{ 
	register int i, x; 
	scanf("%d", &i); 
	x = ++i + ++i + ++i; 
	printf("%d", x); 
	return 0; 
} 

