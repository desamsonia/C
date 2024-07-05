#include<stdio.h>

int main()
{
	int arr[50],n,i,j,k;
	printf("Enter size:");
	scanf("%d",&n);

	printf("Enter elements of an array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i] == arr[j])
			{
				for(k=j;k<n;k++)
				{
					arr[k] = arr[k+1];
				}
				j--;
	               		n--;		
			}
		}
	}

	for(i=0;i<n;i++)
		printf("%d ",arr[i]);

	return 0;
}
			

