#include <stdio.h> 

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0])) 

int main(void) 
{ 
	int i; 
	int arr[] = {1, 2, 3, 4, 5}; 
        //int size=sizeof(arr) /sizeof(arr[0]);

	for (i = -1; i < ARRAY_SIZE(arr) - 1; ++i) 
		printf("%d ", arr[i + 1]); 

	printf("\n"); 

	return 0; 
} 

