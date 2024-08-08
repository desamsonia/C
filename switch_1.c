#include<stdio.h> 

void main() 
{ 
	switch(2) 
	{ 
	case 1L: 
		printf("No"); 

	case 2: 
		printf("%s","GEEKS"); 
		goto Love;

	case 3L: 
		printf("Please"); 

	case 4L:Love: 
		printf("FOR"); 
	} 
} 

