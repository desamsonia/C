#include<stdio.h>

int main()
{
	int arr[4] = {1,3,4,1};
	int i,j,min=0,max=0;
	
	for(i=0;i<4-1;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] =temp;
			}
		}
			
	}

	min=arr[0],max=arr[4-1];
        printf("min = %d and max = %d\n",min,max);

	int res = min+max;
	printf("res = %d\n",res);
	return 0;
}
