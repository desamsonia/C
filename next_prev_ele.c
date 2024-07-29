/* Update every array element with multiplication of previous and next numbers in array 
 * i/p: 1 2 3 4 5 6
 * exp:1-> 1*2 = 2 = arr[0]
 *     2-> 1*3 = 3 = arr[1]
 *     3-> 2*4 = 8 = arr[2]
 *     4-> 3*5 = 15 = arr[3]
 *     5-> 4*6 = 24 = arr[4]
 *     6-> 5*6 = 30 = arr[5]
 */

#include<stdio.h>

int main()
{
        int arr[50];
        int i,n;
        printf("Enter n:");
        scanf("%d",&n);
        printf("Enter elements:");
        for(i=0;i<n;i++)
                scanf("%d",&arr[i]);

	int curr;
	int prev = arr[0];
	arr[0] = prev * arr[1];

	for(i=1;i<n-1;i++)
	{
		curr = arr[i];
		arr[i] = prev*arr[i+1];
		prev = curr;
	}
	arr[n-1] = prev * arr[n-1];

	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}
