#include <stdio.h> 
int main() 
{ 
	// initialize the val=1 
	int val = 1; 

	do { 
		val++; 
		++val; 
	} while (val++ > 25); 
	printf("%d\n", val); 
	return 0; 
} 

