#include <stdio.h> 
int add(int a, int b) 
{ 
	if (a != 0 && b != 0) 
		return printf("%*c%*c", a, '.', b, '.'); 
	else
		return a != 0 ? a : b; 
} 
int main() 
{ 
	int A = 0, B = 0; 
	scanf("%d %d", &A, &B); 
	printf("Required sum is %d", add(A, B)); 
	return 0; 
} 

