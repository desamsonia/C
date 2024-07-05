/* program to print array elements in wave form
 * i/p: arr[] = [1,2,3,4], o/p: arr[] = [2,1,4,3]
 */

#include<stdio.h>

void sort(int *arr,int n);

void sortWave(int *arr,int n)
{
	int temp=0,i;
	sort(arr,n);
	for(i=0;i<n-1;i=i+2)
	{
	    temp=arr[i];
	    arr[i]=arr[i+1];
	    arr[i+1]=temp;
	}
}

void sort(int *arr,int n)
{
	int i,j,temp=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
			        arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
		

int main()
{
	int arr[50];
        int n,i,j;
	printf("Enter size if an array:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	sortWave(arr,n);

	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;

}
