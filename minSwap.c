/* Find minimum number of swaps required to gather all elements less than or equals to k 
 * i/p: 2 7 9 5 8 7 4, k = 7
 *  if arr[i] > k ,then swap, here 9>7 and 8> 7, so two swaps required 
 * o/p: 2
 */
#include<stdio.h>
int main()
{
        int arr[50];
        int n,i,k;
        printf("Enter n:");
        scanf("%d",&n);
        printf("Enter elements:");
        for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
	printf("Enter k:");
	scanf("%d",&k);

	int cnt = 0,g = 0;
	for(i=0;i<n;i++)
	{
		if(arr[i] <= k)
			cnt++;
	}

	for(i=0;i<n;i++)
	{
		if(arr[i] > k)
			g++;
	}

	int ns = g,j;
	for(i=0,j=cnt;j<n;i++,j++)
	{
		if(arr[i] > k)
			g--;
		if(arr[j] > k)
			g++;
	}

	if(ns > g || ns < g)
		ns = g;

	printf("no of swaps:%d\n",ns);
	return 0;
}
