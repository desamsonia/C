#include<stdio.h>

int main()
{
	int arr[5] = {1,2,3,4,5};
	int i,j,m,mid=0;
     
	m=arr[0];

	mid = 5/2;
	for(i=0;i<5;i++)
	{    
		if(i==mid)
		{
			arr[i] = m;
			break;
		}
		arr[i] = arr[i+1];
	}

	for(i=0;i<5;i++)
		printf("%d ",arr[i]);

	return 0;
}
	
	     	

