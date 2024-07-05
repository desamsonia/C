#include<stdio.h>

int main()
{
	int N = 8, M = 5; // distibute chocoloates to 5 children's
	int arr[8] = {1,3,4,7,9,9,12,56}; // if array not sorted then first sort array

	int min = arr[N-1];
	int i,dif=0;

	for(i=0;i<= N-M;i++)
	{
		dif = arr[i+M-1] - arr[i];
		if(dif < min)
			min = dif;
	}

	printf("min = %d\n",min);

	return 0;
}
		
