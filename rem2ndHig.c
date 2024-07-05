/* first find 2nd highest element in array by sorting or other mathod, later do below code */

#include<stdio.h>

int main()
{
	int arr[5] = {1,2,3,4,5};
	int i,j;

	for(i=0;i<5;i++)
	{
		if(i==5-2)
		{
		   arr[i] = arr[i+1];
		}

	}

	for(i=0;i<4;i++)
		printf("%d ",arr[i]);

	return 0;
}
