/* Rearrange an array such that even index elements are smaller and odd index elements are greater than their next
 * i/p: 6 4 2 1 8 3
 * o/p: 4 6 1 8 2 3
 */

#include<stdio.h>

int main()
{
	 int arr[50];
        int n,i;
        printf("Enter n:");
        scanf("%d",&n);
        printf("Enter elements:");
        for(i=0;i<n;i++)
                scanf("%d",&arr[i]);

	for(i=0;i<n-1;i++)
	{
		if((i%2 == 0) && (arr[i] > arr[i+1]))
		{
	             int t = arr[i];
		     arr[i] = arr[i+1];
		     arr[i+1] = t;
		}

		if((i%2 != 0 ) && ( arr[i] < arr[i+1]))
		{
			int t1 = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = t1;
		}
	}
	
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}
