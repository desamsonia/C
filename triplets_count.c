/* return count ,if sum of any two elements of array is equal to any element in an array then count
 * i/p: [1,5,3,2] -> 1+2 = 3,so count = 1, 3+2=5, again increment count by 1 that is count = 2
 */

#include<stdio.h>

int main()
{
	int arr[100];
	int n,i,j,cnt=0;
	int index[100000] = {0};

        printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]);

	for(i=0;i<n;i++)
		index[arr[i]] = 1;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(index[arr[i]+arr[j]] == 1)
				cnt++;
		}
	}

	printf("cnt = %d\n",cnt);
}
	
