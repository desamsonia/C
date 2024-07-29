/* Rearrange an array in such an order that– smallest, largest, 2nd smallest, 2nd largest and so on
 * i/p: 5 6 2 3 1 4 8 7 9
 * later sort them: 1 2 3 4 5 6 7 8 9
 * o/p: 1 9 2 8 3 7 4 6 5
 */
#include<stdio.h>

int main()
{
	int arr[50],n,i;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	//sort the elements
	int temp[50],index=0,j;

	for(i=0,j=n-1; (i <= n/2 || j>n/2) ; i++,j--)
	{
		temp[index++] = arr[i];
		temp[index++] = arr[j];
	}

	for(i=0;i<n;i++)
		arr[i] = temp[i];

	for(i=0;i<n;i++)
		printf("%d ",arr[i]);

	return 0;
}
