#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int arr[6] = {-6,-3,-1,2,4,5};
	int i,j,v,temp;
	int a[6];

	for(i=0;i<6;i++)
	{
	   v = abs(arr[i]);
	   a[i]=v*v;
	}

	for(i=0;i<6;i++)
		printf("%d ",a[i]);

	printf("\n");

	for(i=0;i<6-1;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	for(i=0;i<6;i++)
		printf("%d ",a[i]);
		
	return 0;
}
