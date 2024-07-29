/* Double its value and replace the next number with 0 if current and next value are same and shift all 0's to the end

 *i/p:    0 3 3 3 0 0 7 7 0 9
 * step1: 0 6 0 3 0 0 14 0 0 9
 * step2 and o/p: 6 3 14 9 0 0 0 0 0 0  */

#include<stdio.h>

void double_repWith0(int arr[],int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		if((arr[i] != 0) && (arr[i] == arr[i+1]))
		{
			arr[i] = 2*arr[i];
			arr[i+1] = 0;
		}
	}
}

void zeroToEnd(int arr[],int n)
{
	int i,cnt = 0;
	for(i=0;i<n;i++)
	{
		if(arr[i] != 0)
		{
			arr[cnt++] = arr[i];
		}
	}

	while(cnt < n)
		arr[cnt++] = 0;
}

int main()
{
	int arr[50];
	int n,i;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	double_repWith0(arr,n);
	zeroToEnd(arr,n);
	
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}
