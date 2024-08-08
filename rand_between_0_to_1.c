#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

	int main() 
	{ 
		srand(time(NULL));
		printf("%f\n", (double) rand()/RAND_MAX); 
		return 0; 
	} 

