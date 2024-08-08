#include<stdio.h>
void main() 
{ 
	//int a[3][4] = (char*) 65472;
	int  a[3][4] = { 1, 2, 3, 4, 4, 3, 2, 1, 7, 8, 9, 0 }; 
        int (*p)[4] = a;

	p=(int*)65472;

	printf("%u, %u", a + 1, &a + 1); 
} 

