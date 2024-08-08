#include <stdio.h> 
int A() 
{ 
	char c = 'B'; 
	return c; 
} 

int main() 
{ 
	printf("%lu", sizeof(A())); 
	return 0; 
} 

